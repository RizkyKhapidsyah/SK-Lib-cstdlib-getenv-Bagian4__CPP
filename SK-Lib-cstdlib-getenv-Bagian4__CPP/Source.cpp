#pragma warning(disable:4996)

#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	const char* env_var[5] = { "PUBLIC","HOME","SESSIONNAME","LIB","SystemDrive" };
	char* env_val[5];

	for (int i = 0; i < 5; i++) {
		env_val[i] = getenv(env_var[i]);
		if (env_val[i] != NULL) {
			cout << "Variable = " << env_var[i] << ", Value= " << env_val[i] << endl;
		} else {
			cout << env_var[i] << " doesn't exist" << endl;
		}
	}

	_getch();
	return 0;
}