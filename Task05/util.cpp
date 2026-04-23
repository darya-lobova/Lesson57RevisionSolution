#include "util.h"

void init(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m, int a, int b) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % (b - a + 1) + a;
		}
	}
}


string convert_to_string(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	string s = "";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			s += to_string(matrix[i][j]) + " ";
		}
		s += "\n";
	}
	return s;
}