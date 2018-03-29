 ///
 /// @file    SafeFile.cc
 /// @author  Chans(加油，慢一点没关系)
 /// @date    2018-03-29 10:39:58
 ///
#include <stdio.h>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class SafeFile
{
	public:
		SafeFile(FILE * filePointer)
		: _filePointer(filePointer)
		{
		    cout << "SafeFile()" << endl;
		}

	    void write(const string & msg)
		{
		    fwrite(msg.c_str(), msg.size(), 1, _filePointer);
		}

		~SafeFile()
		{
		    if(_filePointer)
			{
                fclose(_filePointer);
				cout << "~SafeFile() fclose(p)" << endl;
			}

		}

	private:
		FILE * _filePointer;
};


int main(void)
{
    SafeFile sf(fopen("test.txt", "wr+"));

	sf.write("hello, world");

	return 0;
}
