// Task X [The all local minimum]
// Все локальные минимумы
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать эффективную функцию (или программу), которая 
// находит и возвращает все локальные минимумы.

#include "logic.h"

string get_all_local_minimums(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	string s = "";
	if (n <= 0 || m <= 0) {
		s += "Error.";
	}
	bool first = true;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int current = matrix[i][j];
			bool is_min = true;


			if (i > 0 && matrix[i - 1][j] <= current) {
				is_min = false;
			}

			if (is_min && i < n - 1 && matrix[i + 1][j] <= current) {
				is_min = false;
			}

			if (is_min && j > 0 && matrix[i][j - 1] <= current) {
				is_min = false;
			}

			if (is_min && j < m - 1 && matrix[i][j + 1] <= current) {
				is_min = false;
			}

			if (is_min) {

				if (!first) {
					s += " ";
				}

				s += to_string(current);
				first = false;
			}
		}
	}
	return s;
}