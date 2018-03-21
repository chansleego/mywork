 ///
 /// @file    set.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-20 15:06:49
 ///
#include <cmath>
#include <set>
#include <iostream>

using std::cout;
using std::endl;
using std::set;
class Point
{
	public:
        Point(int ix = 0, int iy = 0)
		: _ix(ix)
		, _iy(iy)
		{
		}

        int distance()
		{
		    return sqrt(_ix * _ix, _iy * _iy);
		}
        
		friend std::ostream & operator<<(std::ostream & os, const Point & rhs);

	private:
	    int _ix;
		int _iy;
};

#if 0
bool operator<(const Point & lhs, const Point & rhs)
{
    return lhs.distance() < rhs.distance();
}

std::ostream & operator<<(std::ostream & os, const Point & rhs)
{
	os << "(" << rhs._ix
	   << "," << rhs._iy
	   << ")" ;
	return os;
}
#endif

//set内部不能存放关键字相同的元素
//默认情况下采用升序排列
//
void test0(void)
{
    set<int> setInt{1, 3, 4, 5, 7, 3, 8, 9, 9, 3, 2, 7, 6, 0};

	set<int, std::less<int>>::const_iterator cit;

	for(cit = setInt.begin();cit != setInt.end(); ++cit)
	{
	    cout << *cit << " ";
	}
	
	cout << endl;

}

void test1(void)
{
	//降序
    set<int, std::greater<int>> setInt{1, 3, 4, 5, 7, 3, 8, 9, 9, 3, 2, 7, 6, 0};

	set<int>::const_iterator cit;

	for(cit = setInt.begin();cit != setInt.end(); ++cit)
	{
	    cout << *cit << " ";
	}
	
	cout << endl;
}

int test2(void)
{
    


    return 0;
}






int main(void)
{
	test0();
	return 0;    
}























