#include <iostream>
#include "myheaders.h"

int partition(long arr[], int low, int high)
{
	int pivot = arr[high]; //Choose the last element as pivot
	int i = low - 1; //Index of the smaller element boundary

	for (int j = low; j < high; j++)
	{
		//Move elements smaller than the pivot to the left side
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}

	//Place the pivot in its correct sorted position
	swap(arr[i+1], arr[high]);
	return i + 1;
}


//Recursively sorts subarrays before and after the partition
void quickSort(long arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi-1); //Sort left subarray
		quickSort(arr, pi + 1, high); //Sort right subarray
	}
}
