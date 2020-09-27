#pragma once

#ifdef COMPILING_DLL
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif


class DLLEXPORT BinarySearch
{
public:
	int Search(int target, int* items, int length);
};
