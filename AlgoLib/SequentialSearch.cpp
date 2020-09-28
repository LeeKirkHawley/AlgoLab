#include "pch.h"
#include "SequentialSearch.h"

int SequentialSearch::Search(int target, int* items, int length)
{
	for (int i = 0; i < target; i++) {
		if (items[i] == target)
			return i;
	}

	return -1;
}
