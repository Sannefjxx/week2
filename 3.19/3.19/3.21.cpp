#include<stdio.h>;


int main(void) {

	int c;

	
	printf("Enter a number:");
	scanf_s("%d", &c);
	printf("Preincrenenting: \n %d", c);
	printf("%d \n", c++);
	printf("%d \n", c);
	printf("Postincrementing: \n %d", c);
	printf("%d \n", ++c);
	printf("%d \n", c);

}