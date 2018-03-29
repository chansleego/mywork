 ///
 /// @file    Point3D.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-29 15:25:15
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point2D
{
public:
	Point2D(int ix, int iy)
	: _ix(ix)
	, _iy(iy)
	{
	    cout << "Point(int ix, int iy)" << endl;
	}

	~Point2D()
	{
	    cout << "~Point2D()" << endl;
	}

	void print() const
	{
	    cout << "(" << _ix
			 << "," << _iy
			 << ")" << endl;
	}

	int getX() const
	{
	    return _ix;
	}
private:
	int _ix;
protected:
	int _iy;
};


class Point3D
: public Point2D
{
	public:
		Point3D(int ix, int iy, int iz)
		: Point2D(ix, iy)
		, _iz(iz)
		{
		    cout << "Point(int ix, int iy,int iz)" << endl;
		}

		void print() const
		{
		    cout << "(" << getX()
				 << "," << _iy
				 << "," << _iz
				 << ")" << endl;
		}

        ~Point3D()
        {
            cout << "~Point3D()" << endl;  
        }

    private:
		int _iz;
};

int main(void)
{
    Point2D p1(1, 2);
	p1.print();
	Point3D p2(3, 4, 5);
	p2.print();
	return 0;
}
