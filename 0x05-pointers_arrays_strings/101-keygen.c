#include "main.h"
/**
 * generateRandomChar --
 *  --
 * Return: --
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 12
char generateRandomChar()
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const size_t charsetSize = sizeof(charset) - 1;
	return charset[rand() % charsetSize];
}

int main(void) {
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator

	for (int i = 0; i < PASSWORD_LENGTH; ++i)
	{
		password[i] = generateRandomChar();
	}

	password[PASSWORD_LENGTH] = '\0'; // Null-terminate the string
	
	printf("%s\n", password);
	return 0;
}
