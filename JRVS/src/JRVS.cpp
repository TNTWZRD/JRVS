#include "JRVS.h"

JRVS::JRVS(string file){
	// INIT
	FILENAME = file;
	File.open(FILENAME, fstream::in);
	char c;
	while (File.get(c))
		CONTENTS += c;
	File.close();

	JRVSlex::JRVSlex(CONTENTS);

}
