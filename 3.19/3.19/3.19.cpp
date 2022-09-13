#include <stdio.h>;
#include "3.19.h"

int main(void) {
	int I;
	int num1;
	int num2;
	int num3;
	int counter = 0;

	while (counter == -1) {
		printf("%s", "Enter loan principal (-1 to end):");
		scanf_s("%d", &num1);
		printf("%s", "Enter interest rate:");
		scanf_s("%d", &num2);
		printf("%s", "Enter term of the loan in days:");
		scanf_s("%d", &num3);
		I = num1 * num2 * num3 / 365;
		printf("%s", " The interest charge is $");
		counter = counter + 1;

	}

}