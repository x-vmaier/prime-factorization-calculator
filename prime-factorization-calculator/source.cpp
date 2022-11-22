#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main() {

	int num;

label:

	int i = 2;

	cout << "Please enter an Integer: ";
	cin >> num;

	if (num != 0 && num > 0) {
		while (num != 1) {
			while (num % i == 0) {
				for (num = num; num % i == 0; num = num / i)
					printf("	%d / %d = %d\n", num, i, num / i);
			}
			i++;
		}
	}
	else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "0 and negative numbers aren't possible!" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		goto label;
	}

	cout << "Prime factorization complete!\n";

	goto label;

	return 0;
}