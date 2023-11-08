#include <stdio.h>

int main() {
	int a[20];
	a[0] = 0;
	a[1] = 1;
	for (int i=0; i < 20; i++) {
		a[i + 2] = a[i] + a[i + 1];
	}
	for (int j = 0; j < 20; j++) {
		printf("%d ", a[j]);
	}
}