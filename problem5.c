#include <stdio.h>

int main(void) {
	unsigned int n = 20;
	long long unsigned int out = 1;
	for (unsigned int i = 1; i <= n; i++) {
		out *= i;
	}
	for (unsigned int i = n; i > 0; i--) {
		long long unsigned int t = out / i;
		int set = 1;
		for (unsigned int j = i; j <= n; j++) {
			if (t % j != 0) set = 0;
		}
		if (set) out = t;
	}
	printf("%llu\n", out);
	return 0;
}
