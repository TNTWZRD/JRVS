#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "JRVSlex.h"

using namespace std;

class JRVS {
private:
	string FILENAME;
	fstream File;
	string CONTENTS;
public:
	JRVS(string file);

};

