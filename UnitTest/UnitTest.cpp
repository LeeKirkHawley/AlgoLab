#include "pch.h"
#include "CppUnitTest.h"
#include "..\AlgoLib\BinarySearch.h"
#include "..\AlgoLib\SequentialSearch.h"
#include "..\AlgoLib\SelectionSort.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(Binary_Search_Should_Find_Index_Of_Item)
		{
			BinarySearch binarySearch;

			int items[] = {2, 4, 6, 8, 10, 13, 15};

			Assert::AreEqual(0, binarySearch.Search(2, items, 7));

			Assert::AreEqual(2, binarySearch.Search(6, items, 7));

			Assert::AreEqual(4, binarySearch.Search(10, items, 7));

			Assert::AreEqual(5, binarySearch.Search(13, items, 7));

			Assert::AreEqual(6, binarySearch.Search(15, items, 7));

			Assert::AreNotEqual(7, binarySearch.Search(15, items, 7));

		}

		TEST_METHOD(Sequential_Search_Should_Find_Index_Of_Item)
		{
			SequentialSearch sequentialSearch;

			int items[] = { 2, 4, 6, 8, 10, 13, 15 };

			Assert::AreEqual(0, sequentialSearch.Search(2, items, 7));

			Assert::AreEqual(2, sequentialSearch.Search(6, items, 7));

			Assert::AreEqual(4, sequentialSearch.Search(10, items, 7));

			Assert::AreEqual(5, sequentialSearch.Search(13, items, 7));

			Assert::AreEqual(6, sequentialSearch.Search(15, items, 7));

			Assert::AreNotEqual(7, sequentialSearch.Search(15, items, 7));
		}

		TEST_METHOD(Selection_Sort_Should_Return_Sorted_Array)
		{
			vector<int> items;
			items.push_back(45);
			items.push_back(33);
			items.push_back(69);
			items.push_back(3);
			items.push_back(66);
			items.push_back(101);
			items.push_back(2);
			items.push_back(44);
			items.push_back(2098);
			items.push_back(8);

			SelectionSort selectionSort;

			vector<int> sortedItems = selectionSort.Sort(items);

			Assert::AreEqual(sortedItems.at(0), 2);

			Assert::AreEqual(sortedItems.at(2), 8);

			Assert::AreEqual(sortedItems.at(9), 2098);
		}
	};
}
