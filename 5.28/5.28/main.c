#include <stdio.h>

char change_case(char alphabet) {
	if (alphabet >= 'A' && alphabet <= 'Z') {
		return alphabet + 32;  
	}
	else if (alphabet >= 'a' && alphabet <= 'z') {
		return alphabet - 32; 
	}
	else {
		return alphabet; 
	}
}

int main() {
	char input_char;
	printf("請輸入字母: ");
	scanf("%c", &input_char);

	char result = change_case(input_char);
	printf("大小更改後的字母: %c\n", result);

	return 0;
}


