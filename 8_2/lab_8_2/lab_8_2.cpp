// lab_8_2.cpp
// Довгошиї Анастасії
// Лабораторна робота № 8.2.
// Опрацювання літерних рядків
// Варіант 6

#include <iostream>
using namespace std;

int Count(char* str, int slovo, int count)
{
	int i = 0;
	while (str[i] == ' ' && str[i] != '\0')
		i++;

	while (str[i] != '\0') {
		if (str[i] != ' ' && slovo == 0)
		{
			slovo = 1;
			count++;
		}
		else if (str[i] == ' ')
			slovo = 0;
		i++;
	}
	return count;
}

int main()
{
	char s[80];
	int count = 0;
	int slovo = 0;

	cout << "Enter the string: " << endl;
	cin.get(s, 80);

	cout << "Num of words: " << Count(s, slovo, count);
	cin.get();
	return 0;
}

