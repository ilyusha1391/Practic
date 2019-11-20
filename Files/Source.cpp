#include <iostream> 
#include <fstream> 
#include <vector>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");

	ifstream fin("input.txt");
	int n;
	vector<int> arr;
	if (!fin.good())
	{
		cout << "Ошибка!\n";
	}
	else
	{
		while (fin >> n)
		{
		arr.push_back(n);
		}
		cout << "input.txt:\n";
		for (int i = 0; i < arr.size(); i++)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	long sum = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		sum += arr[i];
	}
	cout << "Сумма: " << sum << endl;
	ofstream out("output.txt");
	if (out.is_open())
	{
		out << sum << endl;
	}
	fin.close();
	cout << endl;
	ifstream fin1("input1.txt");
	int m;
	vector<int> arr1;
	if (!fin1.good())
	{
		cout << "Ошибка!\n";
	}
	else
	{
		while (fin1 >> m)
		{
			arr1.push_back(m);
		}
		cout << "input1.txt:\n";
		for (int i = 0; i < arr1.size(); i++)
		{
			cout << arr1[i] << " ";
		}
	}
	cout << endl;
	long sum1 = 0;
	for (int i = 0; i < arr1.size(); i++)
	{
	sum1 += arr1[i];
	}
	cout << "Сумма: " << sum1 << endl;
	ofstream out1("output.txt", ios::app);
	if (out1.is_open())
	{
		out1 << sum1 << endl;
	}
	fin1.close();
	cout << "Данные записаны в output.txt" << endl;

	system("pause");
	return 0;
}