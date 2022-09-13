#include<stdio.h>;
#include<math.h>;

int main(void) {
	float interest;
	int principal;
	int rate;
	int day;
	int teller;
	teller = 0;
	if (teller = 0) {
		teller = teller + 1;
		printf("Enter loan principal:");
		scanf_s("%f", &principal);
	}
	while (teller == 1) {
		teller = teller + 1;
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &day);
		interest = principal * rate * (day / 365);
		printf("The interest charge is $ %f\n", interest);
	}
	while(teller > 1){
		teller = teller + 1;

		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &principal);
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &day);
		interest = principal * rate * (day / 365);
		printf("The interest charge is $ %f\n", interest);
		
	}
	if (principal != -1) {
		printf("END");

	}
}