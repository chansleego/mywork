 ///
 /// @file    Singleton.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-19 08:51:43
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Singleton
{
public:
    static Singleton * getInstance()
	{
	    if( NULL == _pInstance )
		{
		    _pInstance = new Singleton;
		}
		return _pInstance;
	}
private:
	Singleton()
	{
	    cout << "Singleton()" << endl;
	}

	~Singleton()
	{
	    cout << "~Singleton()" << endl;
	}
private:
    static Singleton * _pInstance;
	
};

Singleton * Singleton::_pInstance = NULL;

int main(void)
{
    Singleton * p1 = Singleton::getInstance();
    Singleton * p2 = Singleton::getInstance();
    Singleton * p3 = Singleton::getInstance();

	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;
	cout << "p3 = " << p3 << endl;

	return 0;
}
