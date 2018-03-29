 ///
 /// @file    multimap.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-22 15:25:37
 ///
#include <string>
#include <map>
#include <iostream>
#include <utility>

using std::cout;
using std::endl;
using std::string;
using std::multimap;
using std::pair;

void test(void)
{
    multimap<int, string, std::greater<int>> multimapIntStr = {
	    pair<int, string>(1,"BeiJing"),
		pair<int, string>(2, "ShenZhen"),
		pair<int, string>(3, "GuangZhou"),
		pair<int, string>(4, "SuZhou")
	};
    
	for(auto & elem : multimapIntStr)
	{
	    cout << elem.first << "--->" << elem.second << endl;
	}
     
	multimap<int, string, std::greater<int>>::const_iterator cit;
	
	for(cit = multimapIntStr.begin(); cit != multimapIntStr.end(); ++cit)
	{
	    cout << cit->first << "--->" << cit->second << endl;
	}
	
}

int main(void)
{
    test();
	return 0;
}
