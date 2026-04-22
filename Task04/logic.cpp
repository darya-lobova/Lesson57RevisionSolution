// Task 04 [The Sum of elements of columns with extreme elements]
// Сумма элементов столбцов с экстремальными элементами
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// высчитывает сумму элементов в тех столбцах заданной матрицы,
// которые содержат хотя бы один экстремальный элемент.

#include "logic.h"
int find_max_element(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m) {
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
	}

	return max;
}

int find_min_element(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m) {
	int min = find_max_element(matrix, n, m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] < min) {
				min = matrix[i][j];
			}
		}

	}

	return min;

}
int sum_elements_of_columns_with_extreme_value(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m) {

	if (n <= 0 || m <= 0) {
		return -1;
	}

	int max = find_max_element(matrix, n, m);
	int min = find_min_element(matrix, n, m);
	int sum = 0;

	bool is_extreme_column[DEFAUL_SIZE] = { false };

	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < n; i++)
		{
			if (matrix[i][j] == min || matrix[i][j] == max) {
				is_extreme_column[j] = true;
				break;
			}
		}
	}

	for (int j = 0; j < m; j++)
	{
		if (is_extreme_column[j]) {
			for (int i = 0; i < n; i++)
			{
				sum += matrix[i][j];
			}
		}
	}
	return sum;
}