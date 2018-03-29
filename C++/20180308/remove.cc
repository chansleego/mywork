 ///
 /// @file    remove.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-25 10:59:16
 ///
#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

int main(void)
{
    vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    numbers[2] = numbers[4] = numbers[6] = 88;
//	std::remove(numbers.begin(), numbers.end(), 88);
   // copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(cout, " "));
	numbers.erase(std::remove(numbers.begin(), numbers.end(), 88), numbers.end());
    copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(cout, " "));
    cout << endl;
	return 0;
}
