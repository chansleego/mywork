 ///
 /// @file    AutoReleaseSingleton.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-17 11:49:22
 ///
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using std::cout;
using std::endl;

//单例模式的自动释放
//方法一：嵌套类 + 静态对象

class Singleton
{


	public:
		static Singleton * getInstance()
		{
		    if(NULL == _pInstance)
			{
			    _pInstance = new Singleton;
			}
			else
				return _pInstance;
		}

    class AutoRelease
	{
		public:
			AutoRelease()
			{
			    cout << "AutoRelease" << endl;
			}
			~AutoRelease()
			{
			    if(_pInstance)
				{
				    delete _pInstance;
					cout << "~AutoRelease()" << endl;
				}
			}

	    private:

	};

	private:
		Singleton()
		{
		    cout << "Singleton()" << endl;
		}

		~Singleton()
		{
		    cout << "Singleton()" << endl;
		}
	private:
		static Singleton * _pInstance;
		static AutoRelease _auto;

};

Singleton * Singleton::_pInstance = NULL;
Singleton::AutoRelease Singleton:: _auto;

void print()
{
    cout<< "++++++++++++" << endl;
}

int main(void)
{
    Singleton * p1 = Singleton::getInstance();//这里出错，Singleton::忘记写了
    Singleton * p2 = Singleton::getInstance();
    Singleton * p3 = Singleton::getInstance();

	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;
	cout << "p3 = " << p3 << endl;

	atexit(print);
	atexit(print);
	atexit(print);
	return 0;
}








