#pragma once
#include <cstdint>


enum PRIMATIVE
{
	INT,
	STRING,
	BOOL,
	VOID,
	SHORT,
	BYTE
};

enum STORAGE_METHOD
{
	FUNCTION,
	INTERFACE,
	ENUM
};


enum CONTROL_STATEMENTS
{
	IF,
	ELSE,
	ELSE_IF,
	SWITCH,
	FOR,
	FOR_IN,
	WHILE
};


#ifndef JRVS_BOOL
#define JRVS_BOOL
#	define JRVS_BOOL__TRUE 1
#	define JRVE_BOOL__FALSE 0
#endif
enum BOOLEAN_VAL
{
	TRUE = 1,
	FALSE = 0
};

