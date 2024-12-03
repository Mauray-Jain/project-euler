#include <stdio.h>

unsigned long long sqr(unsigned long long t) {return t*t;}

int main(void) {
	unsigned long long n = 100;
	unsigned long long ans = sqr(n * (n + 1) / 2) - (n * (n + 1) * (2 * n + 1) / 6);
	printf("%llu\n", ans);
	return 0;
}
