#include <iostream>
#include <cstring>
#include "Floyd.h"
#define INF 9999
using namespace std;
int main()
{
	int** map = new int* [100];
	for (int i = 0; i < 100; i++) {
		map[i] = new int[100];
		fill(map[i], map[i] + 100, INF);
	}
	
	map[1][3] = 1;
	map[3][2] = 4;
	map[1][2] = 1000;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << map[i][j]<<" ";
		}
		cout << "\n";
	}
	map = Floyd(map);

	cout << "\n";
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << map[i][j]<<" ";
		}
		cout << "\n";
	}



	for (int i = 0; i < 100; i++)delete map[i];
	delete map;
	return 0;
}
