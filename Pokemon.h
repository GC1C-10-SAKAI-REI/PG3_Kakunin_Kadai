#pragma once
#include <stdio.h>

class Pokemon
{
private:
	const char *_name;

public:
	//
	Pokemon(const char *name);
	//
	Pokemon(const Pokemon& obj);
	//
	~Pokemon();
};