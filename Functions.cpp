#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

double square(double doubleVar) {
	return doubleVar * doubleVar;
}

void displayExplanation(void)
{
	cout << "This program sums the squares of multiple \n"
		<< "series of numbers. Terminate each sequence\n"
		<< "by entering a negative number.\n"
		<< "Terminate the series by entering an\n"
		<< "empty sequence,\n"
		<< endl;
	return;
}

double sumSquareSequence(void)
{
	double accumulator = 0.0;
	for (; ; )
	{
		double dValue = 0;
		cout << "Enter next number: ";
		cin >> dValue;
		if (dValue < 0)
		{
			break;
		}
		dValue = square(dValue);
		accumulator += dValue;
	}
	return accumulator;
}

int main(int argc, char *argv[])
{
	displayExplanation();

	for (; ; )
	{
		cout << "Enter the next sequence" << endl;
		double accumulatedValue = sumSquareSequence();
		if (accumulatedValue <= 0.0)
		{
			break;
		}
		cout << "\nThe total of the values squared is "
			<< accumulatedValue << endl << endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}
