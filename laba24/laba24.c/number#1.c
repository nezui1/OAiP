#include <stdio.h>
#include <Windows.h>

long rec1(int n) {
	if (n == 0) {
		return 1;
	}
	long res = rec1(n - 1) * n;
	return res;
}

void main() {
	int n = 5;
	long f = rec1(n);

	printf("%d! = %ld", n, f);
}