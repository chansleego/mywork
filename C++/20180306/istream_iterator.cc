 ///
 /// @file    istream_iterator.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-21 15:11:53
 ///


#include <iterator> 
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void test0(void)
{

	vector<int> numbers;

    std::istream_iterator<int> isi(cin);

//	copy(isi, std::istream_iterator<int>(), numbers.begin());
	copy(isi, std::istream_iterator<int>(), std::back_inserter(numbers));

	std::ostream_iterator<int> osi(cout);

	copy(isi, std::istream_iterator<int>(), numbers.begin());

	cout << endl;
#if 0
	for(auto & elem : numbers)
	{
	    cout << elem << " ";
	}
#endif
}

int main(void)
{
    test0();
}
