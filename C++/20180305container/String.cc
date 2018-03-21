 ///
 /// @file    String.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-19 19:05:47
 ///
#include <deque>
#include <vector> 
#include <iostream>
#include <list>
using std::cout;
using std::endl;
using std::vector;
using std::deque;
using std::list;
int test1(void)
{
    vector<int> vecInt = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	cout << "sizeof(vector) = " << sizeof(vecInt) << endl;

    for(auto & elem : vecInt)
	{
	    cout << elem << endl;
	}
	cout << endl;

	for(int idx = 0; idx < 9; idx++)
	{
	    cout << vecInt[idx] << endl;
	}
	cout << endl;

    for(size_t idx = 0; idx != vecInt.size(); ++idx)
	{
	    cout << vecInt[idx] << endl;
	}
	cout << endl;
    
	return 0;    
}

int test2(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	deque<int> deqInt(arr, arr + 9);
	deqInt.push_back(1);
	for(auto & elem : deqInt)
	{
	    cout << elem << endl;
	}
}

int main(void)
{
    test2();
	return 0;
    
}
