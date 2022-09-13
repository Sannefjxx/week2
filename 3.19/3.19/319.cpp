#include<stdio.h>;
#include<math.h>;

int main(void) {
	float interest;
	float principal;
	float rate;
	float day;

	principal = 0;
	
	
	 while (principal >= 0) {
		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &principal);
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &day);
		interest = principal * rate * (day / 365);
		printf("The interest charge is $ %f\n", interest);
	}

}