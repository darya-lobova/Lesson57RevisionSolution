﻿// Task X [The all local minimum]
// Все локальные минимумы
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать эффективную функцию (или программу), которая 
// находит и возвращает все локальные минимумы.

#include "logic.h"

string get_all_local_minimums(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	string s = "";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int current = matrix[i][j];
			bool is_max = true;

			if (i > 0 && matrix[i - 1][j] < current) {
				is_max = false;
			}

			if (is_max && i < n - 1 && matrix[i + 1][j] < current) {
				is_max = false;
			}

			if (is_max && j > 0 && matrix[i][j - 1] < current) {
				is_max = false;
			}

			if (is_max && j < m - 1 && matrix[i][j + 1] < current) {
				is_max = false;
			}

			if (is_max) {
				s += to_string(current) + " ";
			}
		}
	}
	return s;
}