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

template <typename T, int JSize>
class Queue
{

	public:
		Queue();
		~Queue();

		bool empty() const;
		bool full() const;
		void push(const T & data);
		void pop();
		T front();
		T back();


	private:
		int _front;
		int _rear;
		T * _parr;
};

template<typename T, int JSize>
Queue<T, JSize>::Queue()//记得初始化，分配空间
: _front(0)
, _rear(0)
, _parr(new T[JSize]())
{
    cout << "Queue()" << endl;
}

template<typename T, int JSize>
Queue<T, JSize>::~Queue()
{
    cout << "~Queue()" << endl;
}


//empty()
template<typename T, int JSize>
bool Queue<T, JSize>::empty() const
{
    return _front == _rear;
}

//full()
template<typename T, int JSize>
bool Queue<T, JSize>::full() const
{
    return _front == (_rear + 1) % JSize;
}

//push
template<typename T, int JSize>
void Queue<T, JSize>::push(const T & data) 
{
    if(!full())
	{
	    _parr[_rear++] = data;//前置++和后置++的使用
		_rear %= JSize;//取模防止越界
	}
	else
		cout << "This Queue is full !" << endl;
}

template<typename T, int JSize>
void Queue<T, JSize>::pop()
{
    if(!empty())
	{
	    ++_front;
		_front %= JSize;
	}
	else
		cout << "This Queue is empty !" << endl;
}

template<typename T, int JSize>
T Queue<T, JSize>::front()
{
  //  cout << "_front" << _front << endl;
    return _parr[_front];
}

template<typename T, int JSize>
T Queue<T, JSize>::back()
{
    return _parr[(_rear -1 + JSize) % JSize];
}

void test()
{
	Queue<int, 10> queue;
	cout << "队空 ？" << queue.empty() <<endl;
    //queue.push(1);
	cout << "队空 ？" << queue.empty() <<endl;
    for(int idx = 2; idx < 10 ; idx++)
	{
	    //_parr[idx] = idx;
	   queue.push(idx);
	}
     
	cout << "队满 ？" << queue.full() << endl;

	while(!queue.empty())
	{
		cout << queue.front() << endl;
	    queue.pop();
	}


}

int main(void)
{
    test();
	return 0;
}
















