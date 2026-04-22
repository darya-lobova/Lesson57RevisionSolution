// Task 03 [The Number of rows with a large number of positive elements]
// Количество строк с большим количество положительных элементов
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая находит
// количество строк, в которых положительных элементов больше 
// чем всех остальных (отрицательных и нулевых).

#include "logic.h"

int count_rows_with_more_positive_values(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {

	if (n <= 0 || m <= 0) {
		return -1;
	}
	int count_positive = 0;
	int count_not_positive = 0;
	int result = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] > 0) {
				count_positive++;
			}
			else {
				count_not_positive++;
			}

		}
		if (count_positive > count_not_positive) {
			result++;
		}
	}

	return result;
}