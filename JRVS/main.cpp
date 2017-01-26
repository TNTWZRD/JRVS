#include <iostream>
#include <sys/stat.h>
#include <conio.h>
#include <string>

#include "src\JRVS.h"

using namespace std;

int main(int argc, char *argv[]) {
#if 0 // So i can test new files im writing with ease
	int MODE = 1; // 0 for Command Line, 1 for cin
	string File; // main.jrvs Location

	if (argc != 2)
		MODE = 1;
	else if (argc == 2)
		MODE = 0;

	MODE = 2; // Manualy Assign Mode 
	File = "C:\\Users\\danie\\Documents\\Visual Studio 2015\\Projects\\JRVS\\JRVS\\testFile.jrvs";

	if (MODE == 0)
		File = argv[1];
	else if (MODE == 1) {
		cout << "Please Enter JRVS File Location: " << endl;
		getline(cin, File);
	}

	if (File.length() < 6)
		cout << "The File Name You Have Entered Is To Short!!!" << endl;
	else if (File.substr(File.length() - 5, 5) != ".jrvs")
		cout << "File is not a .jrvs file!!" << endl;
	else {
		struct stat fileInfo;
		if (stat(File.c_str(), &fileInfo) != 0)
			cout << "The Indicated File Does Not Exist!" << endl;
		else {
			// Parse And Compile Code Here:
			cout << "File Found, Begining Parsing...." << endl;
			JRVS::JRVS(File);
			cout << "File Processed, Quitting...." << endl;
		}
	}
#else // Test Code Here:





#endif

	char x; x = _getch();
	return 0;
}