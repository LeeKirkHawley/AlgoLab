#include "pch.h"
#include "InsertionSort.h"

void InsertionSort::Sort(int* intArray, int ARRAY_SIZE) {
    int start = 0;
    int end = ARRAY_SIZE - 1;
    for (int i = start + 1; i <= end; i++) 
    {
        for (int j = i; j > start && intArray[j - 1] > intArray[j]; j--) 
        {
            // move item down until it's no longer of higher value than previous card
            int temp = intArray[j - 1];
            intArray[j - 1] = intArray[j];
            intArray[j] = temp;
        }
    }
}
