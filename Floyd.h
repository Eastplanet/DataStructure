#ifndef Floyd_H
#define Floyd_H
#include <iostream>
int** Floyd(int** arr) {
	for (int k = 0; k < 100; k++) {
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				if (arr[i][j] > arr[i][k] + arr[k][j])arr[i][j] = arr[i][k] + arr[k][j];
			}
		}
	}
	return arr;
}
#endif 

