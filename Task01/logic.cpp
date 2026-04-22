// Task 01 [The arithmetic mean of non-zero elements]
// Среднее арифметическое ненулевых элементов
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// вычисляет среднее арифметическое ненулевых элементов матрицы.

#include "logic.h"

double calculate_arithmetical_mean_of_nonzero_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {

	if (n <= 0 || m <= 0) {
		return -1;
	}

	double sum = 0;
	double count = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] != 0) {
				sum += matrix[i][j];
				count++;
			}
		}

	}

	if (count == 0) {
		return 0;
	}

	return sum / count;
}