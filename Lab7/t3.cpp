#include <stdio.h>
char toLower(char a);
int main() {
	char inputString[50];
	int i;
	puts("Please input an English word: ");
	for (i = 0; i < 50; i++) {
		scanf("%c", &inputString[i]);
		if (inputString[i] == '\n' || inputString[i] == ' ')//check if the character is a lower-case English letter
			break;
	}
	for (int j = 0; j < i / 2; j++) {//check if it is a palindrome
		if (toLower(inputString[j]) != toLower(inputString[i - 1 - j])) {
			puts("It's not a palindrome.");
			return 0;
		}
	}
	puts("It's a palindrome.");
	return 0;
}
char toLower(char a) {
	if (a >= 'A' && a <= 'Z')
		return a + 32;
	return a;
}