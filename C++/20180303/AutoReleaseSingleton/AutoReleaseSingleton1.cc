 ///
 /// @file    AutoReleaseSingleton1.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-17 11:49:22
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Singleton
{
	public:
        static Singleton * getInstance()
		{
		    cout << "Singleton" << endl;
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
				    cout << "Autorelease()" << endl;
				}

				~AutoRelease()
				{
				    if(_pInstance)
					{
					    delete _pInstance;
						cout << "~AutoRelease()" << endl;
					}
				}


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
Singleton::AutoRelease Singleton::_auto;

int main(void)
{
    Singleton * p1 = Singleton::getInstance();
    cout << p1 << endl;
	return 0;

}
