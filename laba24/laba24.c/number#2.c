#include <stdio.h>
#include <Windows.h>

long f1(int n) {
	printf(" %d", n);
	if (n > 1) {
		f1(n - 2);
	}
	
}
long f2(int n) {
	if (n > 1) {
		f2(n - 2);
	}
	printf(" %d", n);
}

long f3(int n) {
	printf(" %d", n);
	if (n > 1) {
		f3(n - 2);
	}
	printf(" %d", n);
}
void main() {
	int n = 11;
	long f = f1(n);
	printf("\n");
	long f1 = f2(n);
	printf("\n");
	long f2 = f3(n);

}
