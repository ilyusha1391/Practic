#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char s[80];
	int slovo, count = 0;
	cout << "Введите предложение: " << endl;
	cin.get(s, 80);
	int i = 0;
	while (s[i] == ' ' && s[i] != '\0')
	i++;
	slovo = 0;
	while (s[i] != '\0') {
		if (s[i] != ' ' && slovo == 0)
		{
			slovo = 1;
			count++;
		}
		else if (s[i] == ' ')
			slovo = 0;
		i++;
	}
	cout << "Кол-во слов в предложении " << count;
	cin.get(); cin.get();
	return 0;
}