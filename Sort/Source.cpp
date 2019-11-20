#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int* arr;
	arr = new int[10];
	cout << "Исходный массив:" << endl;
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	int temp;
	for (int i = 0; i < 10 - 1; i++) {
		for (int j = 0; j < 10 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "Итог" << endl;
	for (int i = 0; i < 10; i++) {
	cout << arr[i] << " ";
	}
	cout << endl;
	delete[] arr;
	return 0;
}