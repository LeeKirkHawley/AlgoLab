#pragma once

#ifdef COMPILING_DLL
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif

#include<vector>

using namespace std;

class SelectionSort
{
public:
	vector<int> DLLEXPORT Sort(vector<int> items);
};

