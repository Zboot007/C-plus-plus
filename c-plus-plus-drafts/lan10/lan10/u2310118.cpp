/*Full name: Jamoliddinov Muhammadazimxon.
ID: u2310118
SEC: 001
*/
#include<iostream>
using namespace std;

void readMatrix(int matrix[10][10], int m, int n) {
	cout << "Enter elements of the matrix:" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
			cin >> matrix[i][j];
		}
	}
}

void displayMatrix(int matrix[10][10], int m, int n) {
	cout << "Matrix:" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void addMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
}

void transposeMatrix(int matrix[10][10], int result[10][10], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			result[j][i] = matrix[i][j];
		}
	}
}

void multiplyMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int m1, int n1, int m2, int n2) {
	for (int i = 0; i < m1; i++) {
		for (int j = 0; j < n2; j++) {
			result[i][j] = 0;
			for (int k = 0; k < n1; k++) {
				result[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
}

int main() {
	int m1, n1, m2, n2;
	int matrix1[10][10], matrix2[10][10], result[10][10];

	cout << "Enter the dimensions of the first matrix (m1 x n1): ";
	cin >> m1 >> n1;
	readMatrix(matrix1, m1, n1);

	cout << "Enter the dimensions of the second matrix (m2 x n2): ";
	cin >> m2 >> n2;
	readMatrix(matrix2, m2, n2);

	int choice;
	do {
		cout << "\nMatrix Operations Menu:\n";
		cout << "1. Display Matrices\n";
		cout << "2. Find Sum\n";
		cout << "3. Find Transpose\n";
		cout << "4. Find Product\n";
		cout << "0. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "\nMatrix 1:\n";
			displayMatrix(matrix1, m1, n1);
			cout << "\nMatrix 2:\n";
			displayMatrix(matrix2, m2, n2);
			break;
		case 2:
			if (m1 == m2 && n1 == n2) {
				addMatrices(matrix1, matrix2, result, m1, n1);
				cout << "\nSum of matrices:\n";
				displayMatrix(result, m1, n1);
			}
			else {
				cout << "Matrices must have the same dimensions for addition.\n";
			}
			break;
		case 3:
			cout << "\nTranspose of Matrix 1:\n";
			transposeMatrix(matrix1, result, m1, n1);
			displayMatrix(result, n1, m1);
			cout << "\nTranspose of Matrix 2:\n";
			transposeMatrix(matrix2, result, m2, n2);
			displayMatrix(result, n2, m2);
			break;
		case 4:
			if (n1 == m2) {
				multiplyMatrices(matrix1, matrix2, result, m1, n1, m2, n2);
				cout << "\nProduct of matrices:\n";
				displayMatrix(result, m1, n2);
			}
			else {
				cout << "Number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication.\n";
			}
			break;
		case 0:
			cout << "Exiting program.\n";
			break;
		default:
			cout << "Invalid choice. Please try again.\n";
		}
	} while (choice != 0);

	return 0;
}
