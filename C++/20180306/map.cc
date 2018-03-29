 ///
 /// @file    map1.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-22 11:02:10
 ///
#include <utility> 
#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;
using std::string;
using std::map;
using std::pair;
void test(void)
{
    std::pair<int, string > t(123456, "招商银行");
	cout << t.first << " "  << t.second << endl;
}

void test1(void)
{
    map<int, string> mapIntStr = {
	    pair<int, string>(1, "BeiJing"),
		pair<int, string>(2, "ShenZhen"),
		pair<int, string>(3, "ShangHai"),
		pair<int, string>(2, "SuZhou")
	};

	for(auto & elem : mapIntStr)
	{
	    cout << elem.first << " ---> " << elem.second <<endl;
	}
     cout << mapIntStr[1] << endl;
}
void test2(void)
{
    map<string, string> mapIntStr = {
	    pair<string, string>("B", "BeiJing"),
		pair<string, string>("S", "ShenZhen"),
		pair<string, string>("H", "ShangHai"),
		pair<string, string>("Z", "SuZhou")
	};

    map<string, string> mapintStr = {
	    pair<string, string>("S1", "BeiJing"),
		pair<string, string>("S2", "ShenZhen"),
		pair<string, string>("S3", "ShangHai"),
		pair<string, string>("S4", "SuZhou")
	};

	for(auto & elem : mapIntStr)
	{
	    cout << elem.first << " ---> " << elem.second <<endl;
	}
//  cout << mapIntStr["S"] << endl;
//	mapIntStr["A"] = "上海";
//    cout << mapIntStr["A"] << endl;
//	mapIntStr["C"] = "上海";
//    cout << mapIntStr["C"] << endl;
//	mapIntStr["F"] = "上海";
//    cout << mapIntStr["F"] << endl;

	mapintStr["I"] = "上海";
	cout << mapintStr["I"] << endl;
	mapIntStr["I"] = "上海";
	cout << mapIntStr["I"] << endl;

//	mapintStr["S0"] = "WuHan";
//	cout << mapintStr["S0"] << endl;
//	mapintStr["S5"] = "GuangZhou";
//	cout << mapintStr["S5"] << endl;
}

void test3(void)
{
    map<int, string> mapIntStr = {
	    pair<int, string>(1, "BeiJing"),
		pair<int, string>(2, "ShenZhen"),
		pair<int, string>(3, "ShangHai"),
		pair<int, string>(2, "SuZhou")
	};

	for(auto & elem : mapIntStr)
	{
	    cout << elem.first << " ---> " << elem.second <<endl;
	}
     cout << mapIntStr[1] << endl;
}
int main(void)
{
//  test();
//	test2();
    test3();
	return 0;
}
