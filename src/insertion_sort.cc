// Copyright (C) 2016 Sarvesh Kulkarni <sarvesh.kulkarni@villanova.edu>
// If you are a student in the ECE 2161 lab, you may use this code.
// Permission is NOT granted to use this code for non-educational purposes.
// Write code for bubble sort and merge sort and call the functions in main.

// WARNING! WARNING! WARNING!
//  This program declares *very* large arrays. If you have not increased your
//  stack space, expect a segmentation fault. In order to increase your
//  stack space, run the following command from your terminal:
//  ulimit -s 819200

#include <iostream>
#include "myheaders.h"

using namespace std;


void insertionsort(long data[], int n){
	for (int i = 1, j; i < n; i++){
		long tmp = data[i];

		for(j=i; j > 0 && tmp < data[j-1]; j--){
			data[j] = data[j-1];
		}

		data[j] = tmp;
	}

}

