#include <stdio.h>
#include <iostream>

void swap1 (int a, int b) {
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

void swap2(int* a, int* b) {
	int* temp;
	//int eighty = 80;
	*temp = *a;
	*a = *b;
	*b = *temp;
	std::cout << "In Swap2 A: " << *a << ", B: " << *b << "\n";
}

int main(int argc, char *argv[])
{
	int six = 6;
	int ten = 10;

	swap1(six, ten);
	std::cout << "A: " << six << ", B: " << ten << "\n";

	swap2(&six, &ten);
	std::cout << "A: " << six << ", B: " << ten;
	return 0;
}
