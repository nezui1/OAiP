#include <stdio.h>
#include <Windows.h>

void F2(int n) {
	if (n < 5) {
		printf("%d\n", n);
		F2(n + 1);
		F2(n + 3);
	}
}

void main() {
	int n = 1;
	F2(n);
}

		
