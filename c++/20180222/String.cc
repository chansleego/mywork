 ///
 /// @file    String.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-14 19:37:09
 ///
#include <string.h> 
#include <iostream>

using std::cout;
using std::endl;

class String
{
public:
    String()
	{
	    cout << "String()" << endl;
	}

	String(const char * pstr)
	: _pstr(new char[strlen(pstr) + 1]())
	{
	    cout << "String(const char * _pstr)" << endl;
        strcpy(_pstr,pstr);
	}

	String(const String & rhs)
	: _pstr(new char[strlen(rhs._pstr) +1]())
	{
	    cout << "String(const String & rhs)" << endl;
		strcpy(_pstr,rhs._pstr);
	}

	String &operator=(const String & rhs)
	{
	 cout << "String &operator=(const String & rhs)" << endl;
	 if(this != & rhs)
	 {
	     delete [] _pstr;
		 _pstr = new char[strlen(rhs._pstr) + 1]();
		 strcpy(_pstr,rhs._pstr);
	 }
	 return *this;
	}
    
    void print()
	{
	    cout << _pstr << endl;
	}

	~String()
	{
	    cout << "~String()" << endl;
	}
private:
	char * _pstr;

};


int main(void)
{
    String p1;
	String p2;
	p1.print();
	p2.print();
    return 0;
}
