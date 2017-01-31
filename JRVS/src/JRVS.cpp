#include "JRVS.h"

// WORKER FUNCTIONS::

string parseStringOBJ(string symbol) {
	// SYMBOL = STRING:"RANDOMCHARS"
	symbol = symbol.substr(8); // Remove STRING:"
	symbol = symbol.substr(0, symbol.length() - 1); // REMOVE TRAILING "
	return symbol;
}


// Constructor
JRVS::JRVS(string file){
	// INIT
	FILENAME = file;
	File.open(FILENAME, fstream::in);
	char c;
	while (File.get(c))
		CONTENTS += c;
	File.close();
	Lex();
#if 0
	for each (string val in tokens)	{
		cout << val << endl;
	}
#endif

	Parse();
}


// LEX
void JRVS::Lex() {
	string tok, stringVal;
	bool stringOpen = false;

	for (int i = 0; i < CONTENTS.length() + 1; i++){
		tok += CONTENTS[i];

		if (tok == " " && !stringOpen) { // SPACE
			tok = "";
		}
		else if (tok == "\n" && !stringOpen) { // NEWLINE
			tok = "";
		}
		else if (tok == "\t" && !stringOpen) { // TAB
			tok = "";
		}
		// Print Statement
		else if (tok == "PRINT" || tok == "print" && !stringOpen) { // PRINT Command
			tokens.push_back("PRINT");
			tok = "";
		}
		// String Parse:
		else if (tok == "\"") {
			if (stringOpen) {
				tokens.push_back("STRING:\"" + stringVal+"\"");
			}
			stringOpen = !stringOpen;
			tok = "";
		}
		else if (stringOpen) {
			stringVal += CONTENTS[i];
			tok = "";
		}
		// End String Parse

	}
}

// Parse

void JRVS::Parse() {

	int i = 0;
	while (i < tokens.size()){
		// PRINT
		if (tokens[i]=="PRINT") {
			// PRINT STRING
			if (tokens[i+1].substr(0, 6) == "STRING") {
				cout << ">>> " << parseStringOBJ(tokens[i+1]) << endl;
				i += 1; // Add One for sring var
			}

			i += 1; // Add 1 for PRINT
		}


	}

}