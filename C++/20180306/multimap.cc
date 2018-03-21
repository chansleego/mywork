 ///
 /// @file    map.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-20 16:30:40
 ///
#include <utility>
#include <string>
#include <map> 
#include <iostream>
using std::cout;
using std::endl;
using std::pair;
using std::map;
using std::string;

void test0(void)
{
    std::pair<int, string> t(1234, "阿里巴巴");
	cout << t.first << " ---> " << t.second << endl;
}
//#if 0
void test1(void)
{
    map<int, string> mapIntStr = {
		pair<int, string>(1, "北京"),
		pair<int, string>(2, "深圳"),
		pair<int, string>(3, "杭州")
	};
	for(auto & elem : mapIntStr)
	{
	    cout << elem.first << " ---> " << elem.second << endl;
	}
}

void test2(void)
{
    map<string, string> mapIntStr = {
		pair<string, string>("s1", "北京"),
		pair<string, string>("s2", "深圳"),
		pair<string, string>("s3", "杭州")
	};

	for(auto & elem : mapIntStr)
	{
	    cout << elem.first << " ---> " << elem.second << endl;
	}   

    cout << mapIntStr["s1"] << endl;
    cout << mapIntStr["s2"] << endl;

//	mapInStr["s0"] = "上海";
	
	cout << mapIntStr["s1"] << endl;

}

//#endif


int main(void)
{
   // test0();
   // test1();
	test2();
	return 0;
}
