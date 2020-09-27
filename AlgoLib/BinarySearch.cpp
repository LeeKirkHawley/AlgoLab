#include "pch.h"
#include "BinarySearch.h"


int DoSearch(int items[], int target, int first, int last) {
	int length = last - first + 1;
	int mid = first + (last - first) / 2;

	if (items[mid] == target)
		return mid;
	else if (items[mid] < target) {
		first = mid + 1;
	}
	else {
		last = mid - 1;
	}

	DoSearch(items, target, first, last);
}

int BinarySearch::Search(int target, int items[], int length)
{
	int first = 0;
	int last = length - 1;

	return DoSearch(items, target, 0, length - 1);
}



