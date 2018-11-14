#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout.unsetf(cout.dec);
	cout.setf(cout.hex);

	char arg1 = 0x1;
	char arg2 = ~arg1;
	//int arg2 = 0xE;
	// cout << "~arg1 0x" << arg1 << endl;
	// cout << "~arg2 0x" << arg2 << endl;
	printf("%02x\n", ~arg1 );
	printf("%d\n", sizeof(arg2) );
	return 0;
}
