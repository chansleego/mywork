 ///
 /// @file    templateSingleton.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-17 09:59:55
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
	public:
        Point(int ix = 0, int iy = 0)
		: _ix(ix)
		, _iy(iy)
		{
		    cout << "Point()" << endl;
		}

		~Point()
		{
		    cout << "~Point()" << endl;
		}

		friend std::ostream & operator << (std::ostream & os, const Point & rhs)

    private:
		int _ix;
		int _iy;
}

std::ostream & operator << (std::ostream & os, const Point & rhs)
{
   os << "(" << rhs._ix
	  << "," << rhs._iy
	  << ")" << endl;
   return os;
}

template <typename T>
class Singleton
{
	public:
		static T * getInstance(); 
        
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
		static T * _pInstance;
//		static AutoRelease _autoRelease;

};

template <typename T>
T * Singleton<T>::_pInstance = NULL;

template <typename T>
T * Singleton<T>::getInstance()
{
    if(NULL == getInstance())
	{
		_pInstance = new T;
	}
	return _pInstance;
}

















