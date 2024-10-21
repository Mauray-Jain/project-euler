#include <stdio.h>

int is_prime(long long num) {
	for (long long i = 2; i*i <= num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}

int main(void) {
	int primes[] = {2,3,5,7,11};
	long long num = 600851475143;
	long long max = 2;
	for (long long i = 3; i*i <= num; i+=2) {
		if (!is_prime(i)) continue;
		if (num % i == 0) max = i;
	}
	printf("%lld\n", max);
	return 0;
}
