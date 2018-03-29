 ///
 /// @file    bind.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-25 15:35:27
 ///


#include <functional>
#include <iostream>

using std::cout;
using std::endl;
using std::bind;

int func1(int x, int y)
{
    cout << "int func1(int, int)" << endl;
	return x + y;
}

void func2(int n1, int n2, int  n3, const int & n4, int n5)
{
    cout << "(" << n1
		 << "," << n2
		 << "," << n3
		 << "," << n4
		 << "," << n5
		 << ")" << endl;
}


class Foo
{
    public:
		int func2(int x, int y)
		{
		    cout << "int Foo::func2(int x, int y)" << endl;
			return x + y;
		}
	
};


void test1(void)
{
	Foo foo;
    auto f1 = bind(&Foo::func2, foo, std::placeholders::_1, std::placeholders::_2);//绑定成员函数必须加一个取地址符号
    cout << "f1(1, 2) = " << f1(1, 2) << endl;//bind可以将一个成员函数进行包装,变成一个回调函数
    //提前绑定的参数都会进行复制,采用的是值传递
	auto f2 = bind(&Foo::func2, &foo, std::placeholders::_1, std::placeholders::_2);
	cout << "f2(1, 2) = " << f2(1, 2) << endl;

}

void test2(void)
{
     typedef int (*Function)(int, int);//C的函数指针方式,在C++中,我们可以用bind去做
	 Function f1 = func1;//注册回调函数

	 int a = 1, b = 2;
	 cout << "a + b = " << f1(a, b) << endl;//执行回调函数
	
	 auto f2 = bind(func1, a, b);
	 auto f3 = bind(func1, std::placeholders::_1, std::placeholders::_2);//如果只穿一个参数或者不传,则需要使用占位符
	 auto f4 = bind(func1, std::placeholders::_1, a);

	 cout << f2() << endl;
	 cout << f3(10, 11) << endl;
	 cout << f4(a) << endl;
}

void test3(void)
{
    using namespace std::placeholders;
	int n = 7;//bind采用的是值传递
	auto f1 = bind(func2, _4, _3, _2, std::cref(n), n);
    f1(2, 4, 6, 8, 10);
	n = 1;
	auto f2 = bind(func2, _2, _1, 0, std::cref(n), n);
	f2(1, 2, 3, 4, 5, 6, 7);

}

int main(void)
{
    test3();
	return 0;
}
