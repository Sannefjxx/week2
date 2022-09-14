#include<stdio.h>;

int main(void) {
	int a;
	int b;
	int c;
	printf("n\tn^2\tn^3\tn^4\n");
	for (int counter = 1; counter <= 10; counter++) {
		
		a = counter * counter;
		b = a * counter;
		c = b * counter;

		printf("%d\t%d\t%d\t%d\n", counter, a, b, c);

	}
}