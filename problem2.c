// Even Fibonacci numbers

#include <stdio.h>

int main(void) {
	unsigned long long a = 2;
	unsigned long long b = 8;
	unsigned long long temp = 0;
	unsigned long long sum = 0;
	
	while (a < 4000000) {
		if (a % 2 == 0) {
			sum += a;
		}
		// Idea: Every third term is even
		temp = a + 4*b;
		a = b;
		b = temp;
	}

	printf("%llu\n", sum);

	return 0;
}
