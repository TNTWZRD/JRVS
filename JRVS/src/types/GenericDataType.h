#ifndef GENERIC_DATA_TYPE_H__
#define GENERIC_DATA_TYPE_H__
#pragma once

#include <yvals.h>
#include <vector>
#include <atomic>


//	Data release flags
#define DATA_RELEASE_TO_STREAM__ 0x01A
#define DATA_RELEASE_TO_POOL__	 0x01B
#define DATA_RELEASE_TO_FILE__	 0x01C
#define DATA_FLUSH_ALL_TYPES__   0x01D


#define DATA_PASSED_EVIL_STUFF 0xDEADBEEF
#define DATA_PASSED_UNKNOWN_STUFF 0x000B00B5


enum OBJECT_FOUND
{
	DATA_TYPE_FOUND,
	DATA_TYPE_FOUND_UNKNOWN_TYPE,
};


template<typename D, typename O>
class DTParser
{
	protected:
		// Private self reference so I don't have to keep typing the long ass class name
		/*
		 * Protected so you can at least make derivative classes.
		 */
		typedef DTParser _Self;


	public:
		std::vector<std::string> _data;
		

		DTParser(D dataType);

		/**
		 * Input type and parse as string
		 * Return formatted string to AST
		 */
		std::string ParseTypeAsString();
		
};

#endif


