#include<stdio.h>;

int main(void) {
	int num;
	
	num = 5;
	printf("Preincrementing is:\n");
	printf("%d \n", num);
	printf("%d \n", num++);
	printf("%d \n", num);
	
	num = 5;
	printf("Pastincrementing is: \n");
	printf("%d \n", num);
	printf("%d \n", ++num);
	printf("%d \n\n", num);

}