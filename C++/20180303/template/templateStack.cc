 ///
 /// @file    templateStack.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-15 09:16:12
 ///
#include <string> 
#include <iostream>
using std::cout;
using std::endl;
using std::string;

template <typename T, int KSize = 10>
class Stack
{
public:
	Stack();
	~Stack();
	bool empty() const;
	bool full() const;
	void push(const T & data);
	void pop();
	T top();
private:
	int _top;
	T * _array;
};
//在类之外实现，每次都要加上模板的头
template<typename T, int KSize>
Stack<T, KSize>::Stack()//类似于vector<int> vec的写法，Stack<T, Ksize>是一个整体，构成一个类型
: _array(new T[KSize]())
, _top(-1)
{
    cout << "Stack()" << endl;   
}

template<typename T, int KSize>
Stack<T, KSize>::~Stack()
{
    cout << "~Stack()" << endl;
	delete [] _array;
}

template<typename T, int KSize>
bool Stack<T, KSize>::empty() const
{
	return _top == -1;
}

template<typename T, int KSize>
bool Stack<T, KSize>::full() const
{
    return _top == KSize -1;
}

template<typename T, int KSize>
void Stack<T, KSize>::push(const T & data)
{
    if(!full())
	{
	    _array[++_top] = data;
	}
	else
		cout << "This Stack is full!" << endl;
}

template<typename T, int KSize>
void Stack<T,KSize>::pop()
{
    if(!empty())
	{
		--_top;
	}
	else
		cout << "This Stack is empty!" << endl;
}

template<typename T, int KSize>
T Stack<T, KSize>::top()
{
	return _array[_top];
}

void test(void)
{
	Stack<int , 10> stack;
    cout << "stack is empty ?" << stack.empty() << endl;
	stack.push(1);
    cout << "stack is empty ?" << stack.full() << endl;
    for(int idx = 0; idx < 10; ++idx)
	{
	    stack.push(idx);
		cout << idx << endl;
	}
	cout << "This Stack is empty !" << stack.empty() << endl;
    while(!stack.empty())
	{
	    cout << stack.top() << endl;
		stack.pop();
	}
	cout << "This Stack is empty !" << stack.empty() << endl;
    	
}

void test1(void)
{
	Stack<string , 10> stack;
    cout << "stack is empty ?" << stack.empty() << endl;
	string s1(6, 'a');
	stack.push(s1);
    
	cout << "stack is empty ?" << stack.full() << endl;
    
	for(int idx = 0; idx < 10; ++idx)
	{
	    stack.push(string(6, 'a' + idx));
		cout << string(6, 'a' + idx) << endl;
	}

	cout << "This Stack is empty !" << stack.empty() << endl;
    
	while(!stack.empty())
	{
	    cout << stack.top() << endl;
		stack.pop();
	}
	cout << "This Stack is empty !" << stack.empty() << endl;
    	
}

int main(void)
{
    test1();
	return 0;
}














