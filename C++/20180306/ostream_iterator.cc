 ///
 /// @file    ostream_iterator.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-21 11:30:27
 ///
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::copy;

void test(void)
{
    vector <int> numbers{1, 2, 3, 4, 5};

	std::ostream_iterator<int> osi(cout, "\n");

    copy(numbers.begin(), numbers.end(), osi);

}

int main(void)
{
    test();
	return 0;
}
