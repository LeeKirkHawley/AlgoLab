#pragma once

#ifdef COMPILING_DLL
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif

class InsertionSort
{
public:
	void DLLEXPORT Sort(int* intArray, int ARRAY_SIZE);
};

