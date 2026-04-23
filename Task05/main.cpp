#include "logic.h"

int main() {

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n;
	int m;

	cout << "Input n: ";
	cin >> n;
	cout << "Input m: ";
	cin >> m;

	init(matrix, n, n, 0, 5);

	cout << "Matrix:\n";
	cout << convert_to_string(matrix, n, n) << endl;

	string result = get_all_local_maximums(matrix, n, m);

	cout << "All maximus: " << result;

	return 0;
}