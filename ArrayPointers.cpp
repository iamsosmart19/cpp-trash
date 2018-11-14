#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void displayArray(int intArray[], int nSize)
{
	cout << "The value of the array is:\n";
	
	int* pArray = intArray;
	for (int n = 0; n < nSize;n++)
	{
		cout << n << ": " << *(pArray + n) << "\n";
	}
	cout << endl;
}

int main(int argc, char *argv[])
{
	int array[] = {4, 3, 2, 1};
	displayArray(array, 4);
	cout << "Press Enter to continue...";
	cin.get();
	return 0;
}
