#include <stdio.h>

int ispalin(long long num) {
	long long rev = 0;
	long long t = num;
	while (num > 0) {
		rev += num % 10;
		num /= 10;
		rev *= 10;
	}
	rev /= 10;
	return rev == t;
}

int main(void) {
	long long max = 0;
	long long upper = 999;
	for (long long i = upper; i > 0; i--) {
		for (long long j = i; j > 0; j--) {
			long long t = i*j;
			if (ispalin(t) && max < t) max = t;
		}
	}
	printf("%lld\n", max);
	return 0;
}
