#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");

	int i, j, ROWS = 4, COLS = 4, a[20][20], b[20][20];
	for (i = 0; i < ROWS; i++)
	for (j = 0; j < COLS; j++) {
	a[i][j] = rand() % 10;
	b[i][j] = rand() % 10;
	}
	cout << "matrix A" << endl;
	for (i = 0; i < ROWS; i++)
	{
	for (j = 0; j < COLS; j++) {
	cout << a[i][j] << " ";
	}
	cout << endl;
	}
	cout << "matrix B" << endl;
	for (i = 0; i < ROWS; i++)
	{
	for (j = 0; j < COLS; j++) {
	cout << b[i][j] << " ";
	}
	cout << endl;
	}
	int c[20][20];
	for (i = 0; i < ROWS; i++)
	for (j = 0; j < COLS; j++)
	c[i][j] = a[i][j] + b[i][j];
	cout << "Сумма " << endl;
	for (i = 0; i < ROWS; i++)
	{
	for (j = 0; j < COLS; j++) {
	cout << c[i][j] << " ";
	}
	cout << endl;
	}
	int d[20][20];
	for (i = 0; i < ROWS; i++)
	for (j = 0; j < COLS; j++) {
	d[i][j] = 0;
	for (int k = 0; k < COLS; k++)
	d[i][j] += a[i][k] * b[k][j];
	}
	cout << "Произведение " << endl;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++) {
		cout << d[i][j] << " ";
	}
		cout << endl;
	}
	system("pause");
	return 0;
}