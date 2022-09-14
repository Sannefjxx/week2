#include<stdio.h>;

int main(void){

	int number;
	int largest;

	largest = 1;

	for (int counter = 1; counter <= 10; counter++) {

		if (counter <= 10) {

			printf("Enter a number: ");
			scanf_s("%d", &number);
		}
		if(number >= largest) {
			largest = number;
			
		}
		
	}
	printf("largest is: %d", largest);


	}