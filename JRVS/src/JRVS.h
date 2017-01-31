#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "special\AArray.h"


using namespace std;

class JRVS {
private:
	string FILENAME;
	fstream File;
	string CONTENTS;

	vector<string> tokens;
	AArray<string> variables;
public:
	JRVS(string file);
private:
	void Lex();
	void Parse();


	string parseStringOBJ(string symbol);

};

