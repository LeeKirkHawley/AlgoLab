#include "pch.h"
#include "SelectionSort.h"

vector<int> SelectionSort::Sort(vector<int> items)
{
	vector<int> sortedItems;

	while (items.size() > 0) {
		vector<int>::iterator smallest = begin(items);

		for (auto it = begin(items); it != end(items); ++it) {
			if (*it < *smallest) {
				smallest = it;
			}
		}

		sortedItems.push_back(*smallest);
		items.erase(smallest);
	}

	return sortedItems;
}
