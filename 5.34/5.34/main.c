#include <stdio.h>
#include <math.h>

int main() {
	int num1, num2;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	int ans = pow(num1,num2);
	printf("ans is: %d\n", ans);

	return 0;
}