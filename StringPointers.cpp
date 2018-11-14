#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	const char* szString = "Randy";
	cout << "The array is '" << szString << "'" << endl;

	cout << "Display the string as an array: ";
	for (int i = 0;i < 5 ; i++)
	{
		cout << szString[i];
	}
	cout << endl;

	cout << "Display string using a pointer: ";
	const char* pszString = szString;
	while (*pszString)
	{
		cout << *pszString;
		pszString++;
	}
	cout << endl;

	cout << "Press Enter to continue...";
	cin.get();
	return 0;
}
