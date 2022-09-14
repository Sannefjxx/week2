#include<stdio.h>;

int main(void) {

    int i, n;
    bool is_prime = true;

    printf("Enter a positive integer: ");
    scanf_s("%d", &n);
   
    if (n != 0) {
        is_prime = false;
    }

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        is_prime = false;
    }

    // loop to check if n is prime
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
        printf( "%d is a prime number", n);
    else
        printf("%d is not a prime number", n);

    return 0;
}