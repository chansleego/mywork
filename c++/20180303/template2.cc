 ///
 /// @file    template.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-14 21:58:37
 ///
 
#include <iostream>

using std::cout;
using std::endl;

template <class T, char number>
T func(T x, T y)
{
  return x * y * number;
}

int main(void)
{
    int a = 2,  b = 3;
	cout << func<int,20>(a,b) << endl;
	return 0;
}
