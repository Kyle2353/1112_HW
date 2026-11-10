#include <stdio.h>
#include <stdlib.h>

char change(char c) {
	if (c >= 'a' && c <= 'z') {
		return c - 32;
	}
	else if (c >= 'A' && c <= 'Z') {
		return c + 32;
	}
	else {
		return c; 
	}
}

int main() {
	char c;
	printf("Enter a character: ");
	scanf_s("%c", &c);
	char changedChar = change(c);
	printf("Changed character: %c\n", changedChar);
	return 0;
}







