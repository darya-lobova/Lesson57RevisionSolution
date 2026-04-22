// Task 02 [The sum of elements]
// Сумма элементов 
// 
// Дана математическая квадратная матрица размером N.
// Необходимо разработать функцию (или программу), 
// которая вычисляет сумму элементов матрицы, 
// расположенных на главной и побочной диагоналях.

#include "logic.h"

int find_sum_of_main_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum_main = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) {
				sum_main += matrix[i][j];
			}
		}
	}

	return sum_main;
}

int find_sum_of_addition_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum_addition = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == n - 1 - i) {
				sum_addition += matrix[i][j];
			}
		}
	}

	return sum_addition;
}

int sum_main_and_second_diagonales_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {

	if (n <= 0) {
		return -1;
	}

	int mid = 0;

	int result = find_sum_of_main_elements(matrix, n) + find_sum_of_addition_elements(matrix, n);

	if (n % 2 == 1) {
		mid = n / 2;
		result -= matrix[mid][mid];
	}

	return result;
}
	