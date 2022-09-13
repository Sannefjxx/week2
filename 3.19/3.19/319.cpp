#include<stdio.h>;
#include<math.h>;

int main(void) {
	float interest;
	int principal;
	int rate;
	int day;


	printf("Enter loan principal (-1 to end):");
	scanf_s("%d", &principal);

	if (principal > 0) {
		
		printf("Enter interest rate:");
		scanf_s("%d", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &day);
		interest = (float) principal * rate * (day / 365);
		printf("The interest charge is $ %f\n", interest);
	}
	else {
		printf("END");
	}
}