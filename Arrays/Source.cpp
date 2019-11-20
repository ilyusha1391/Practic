#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	int a[10];
	int i;
	int sum = 0;
	for (i = 0; i < 10; i++)
	a[i] = 1 + rand() % 10;
	for (i = 0; i < 10; i++)
	cout << a[i] <<" ";
	cout << endl;
	for (i = 0; i < 10; i++)
	sum += a[i];
	cout << "Сумма = " << sum << endl;
	int mult = 1;
	for (i = 0; i < 10; i++)
	mult *= a[i];
	cout << "Произведение = " << mult << endl;

	system("pause");
	return 0;
}