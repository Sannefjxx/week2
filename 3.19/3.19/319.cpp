#include<stdio.h>;
#include<math.h>;

int main(void) {
	float interest;
	int principal;
	int rate;
	int day;
	int teller;

	teller = 0;
	while (teller != 0) {
		printf("Enter loan principal:");
		scanf_s("%f", &principal);
		teller = teller + 1;
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &day);
		interest = principal * rate * (day / 365);
		printf("The interest charge is $ %f\n", interest);
		if (teller >= 2) {
			teller = teller + 1;

			printf("Enter loan principal (-1 to end):");
			scanf_s("%f", &principal);
			printf("Enter interest rate:");
			scanf_s("%f", &rate);
			printf("Enter term of the loan in days:");
			scanf_s("%d", &day);
			interest = principal * rate * (day / 365);
			printf("The interest charge is $ %f\n", interest);

		}
		if (principal != -1) {
			printf("END!");
		}
	}
	
}