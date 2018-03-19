 ///
 /// @file    template.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-14 21:58:37
 ///
 
#include <iostream>

using std::cout;
using std::endl;

template <class T>
T add(T x,T y)
{
    cout << "T add(T,T)" << endl;
	return x + y;
}

int add(int x,int y)
{
    cout << "int add(int,int)" << endl;
	return x + y;
}

int main(void)
{
    int a = 1,b = 2;
	float c = 3.1,d = 4.2;
	cout << add(a,b) << endl;
	cout << add<float>(c,d) << endl;
	return 0;
}
