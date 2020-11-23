#pragma once

#ifdef COMPILING_DLL
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif

class DLLEXPORT Complexity
{
public:
	int exp1(int a, int b);
	int exp2(int a, int b);

};

