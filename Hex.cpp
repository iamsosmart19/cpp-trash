#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout.unsetf(cout.dec);
	cout.setf(cout.hex);

	int nArg1 = 0x78ABCDEF;
	int nArg2 = 0x12345678;

	cout << "     " << " nArg1 = 0x" << nArg1 << endl;
	cout << "     " << "~nArg1 = 0x" << ~nArg1 << "\n" << endl;
	cout << "     " << " nArg2 = 0x" << nArg2 << endl;
	cout << "     " << "~nArg2 = 0x" << ~nArg2 << "\n" << endl;

	cout << "     " << "  0x" << nArg1 << "\n"
		 << "     " << "& 0x" << nArg2 << "\n"
		 << "     " << "  ----------" << "\n"
		 << "     " << "  0x" << (nArg1 & nArg2) << "\n"
		<< endl;

	cout << "     " << "  0x" << nArg1 << "\n"
		 << "     " << "| 0x" << nArg2 << "\n"
		 << "     " << "  ----------" << "\n"
		 << "     " << "  0x" << (nArg1 | nArg2) << "\n"
		<< endl;

	cout << "     " << "  0x" << nArg1 << "\n"
		 << "     " << "^ 0x" << nArg2 << "\n"
		 << "     " << "  ----------" << "\n"
		 << "     " << "  0x" << (nArg1 ^ nArg2) << "\n"
		<< endl;

	cout << "Press Enter to continue...";
	cin.ignore();
	return 0;
}
