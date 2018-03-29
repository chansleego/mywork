 ///
 /// @file    RAII.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-29 08:34:34
 ///
 
#include <iostream>

using std::cout;
using std::endl;
		
class Point
{

	public:
		Point(int ix, int iy)
		: _ix(ix)
		, _iy(iy)
		{
		    cout << "Point()" << endl;
		}

		void setX(int ix)
		{
		    _ix = ix;
		}
		~Point()
		{
		    cout << "~Point()" << endl;
		}
	friend std::ostream & operator<<(std::ostream & os, const Point & rhs);

    private:
		int _ix;
		int _iy;
};

std::ostream & operator<<(std::ostream & os, const Point & rhs)
{
    os << "(" << rhs._ix
	   << "," << rhs._iy
	   << ")" << endl;
	return os;
}

template <typename T>
class RAII
{
	public:
		RAII(T * p)
		: _p(p)
		{
		    cout << "RAII(T * p)" << endl;
		}

		T * get()
		{
		    return _p;
		}

		T * operator->()
		{
		    return _p;
		}

		T & operator*()
		{
		    return *_p;
		}

		~RAII()
		{
		    if(_p)
				delete _p;
		}

    private:
		T * _p;


};

int main(void)
{
    RAII<Point> pPoint(new Point(1, 2));
	pPoint->setX(10);

    return 0;
}
