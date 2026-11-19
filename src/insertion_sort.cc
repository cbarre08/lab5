/*
 * insertion_sort.cc
 *
 *  Created on: Nov 19, 2026
 *      Author: dhansonr
 */

#include <iostream>
#include "myheaders.h"

using namespace std;

void insertionsort(long data[], long size)
{
	for(int i = 1, j; i < size; i++)
	{
		long tmp = data[i];

		for(j=i; j > 0 && tmp < data[j-1]; j--)
		{
			data[j] = data[j-1];
		}

		data[j] = tmp;
	}
}
