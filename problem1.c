// Multiples of 3 and 5

// Formula used: Sum of AP
// sum of multiples of 3 + multiples of 5 - multiples of 15

#include <stdio.h>

unsigned long sum_of_ap(const long d, const long upper_limit) {
	/*unsigned long l = (upper_limit - 1) / d;*/
	/*l *= d; // l = upper_limit-1 - (upper_limit-1) % d*/
	/*unsigned long n = l / d; // l = d + (n - 1)d*/
	/*return n * (d + l) / 2;*/
	// Method 2: (n/2)*(n+1)*d
	unsigned long n = (upper_limit-1)/d;
	return d * (n + 1) * n /2;
}

int main(void) {
	unsigned long mult_of_3 = sum_of_ap(3, 1000);
	unsigned long mult_of_5 = sum_of_ap(5, 1000);
	unsigned long mult_of_15 = sum_of_ap(15, 1000);
	printf("%lu\n", mult_of_3 + mult_of_5 - mult_of_15);
	return 0;
}
