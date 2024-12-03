#include <limits.h>
#include <stdio.h>

#define N 10001

int main(void) {
	unsigned long long primes[N] = {2};
	for (long long int i = 3, len = 1; i < LONG_MAX; i++) {
		if (primes[N - 1] != 0) break;
		int isprime = 1;
		for (long long int j = 0; j < len; j++) {
			if (i % primes[j] == 0) { isprime = 0; break; }
		}
		if (isprime) {
			primes[len] = i;
			len++;
		}
	}
	printf("%llu\n", primes[N-1]);
	return 0;
}
