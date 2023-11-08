#include <stdio.h>

// Function to find the Greatest Common Divisor (GCD) of two numbers
int findGCD(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return findGCD(b, a % b);
	}
}

// Function to find the Least Common Multiple (LCM) of two numbers
int findLCM(int a, int b) {
	int gcd = findGCD(a, b);
	int lcm = (a * b) / gcd;
	return lcm;
}

int main() {
	int num1, num2;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	int lcm = findLCM(num1, num2);
	printf("The Least Common Multiple is: %d\n", lcm);

	return 0;
}
