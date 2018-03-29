 ///
 /// @file    replace.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-25 10:12:50
 ///
#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int main(void)
{
    vector<int> numbers{1, 2, 3, 4, 5, 6};
	std::less<int> lt;
	std::replace_if(numbers.begin(), numbers.end(), bind2nd(lt, 3), 7);
//	std::replace_if(numbers.begin(), numbers.end(), bind1st(lt, 3), 7);
    std::ostream_iterator<int> osi(cout, " ");
	std::copy(numbers.begin(), numbers.end(), osi);
    cout << endl;
	return 0;

}
