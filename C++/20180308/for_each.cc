 ///
 /// @file    for_each.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-24 22:52:29
 ///
#include <algorithm>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void display(int number)
{
    cout << number << " ";
}

int main(void)
{
    vector<int> numbers{1, 2, 3, 4, 5, 6};
//	for_each(numbers.begin(), numbers.end(), display);
    for_each(numbers.begin(), numbers.end(), [](int number){//[]里面可以放东西
			cout << number << " " <<endl;
			});
	cout << endl;
	return 0;
}
