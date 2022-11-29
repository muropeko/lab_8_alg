// lab_8_1_string.cpp
// Довгошиї Анастасії
// Лабораторна робота № 8.1.
// 	«Пошук та заміна символів у літерному рядку»
// Варіант 6

#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	if(s[pos] == 'S'){
		while ((pos = s.find('S', pos)) != -1)
		{
			pos++;
			if (s[pos + 1] == 'Q')
				k++;
		}
	}
	else if (s[pos] == 'Q') {
		while ((pos = s.find('Q', pos)) != -1)
		{
			pos++;
			if (s[pos + 1] == 'S')
				k++;
		}
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	if (s[pos] == 'S') {
		while ((pos = s.find('S', pos)) != -1)
			if (s[pos + 2] == 'Q')
				s.replace(pos, 3, "****");
		return s;
	}
	else if (s[pos] == 'Q') {
		while ((pos = s.find('Q', pos)) != -1)
			if (s[pos + 2] == 'S')
				s.replace(pos, 3, "****");
		return s;
	}
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "String contained " << Count(str) << " groups of '+ -'" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	
		return 0;
}
