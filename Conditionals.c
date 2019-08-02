/* Write a program that prints out whether a character 
   entered is an uppercase letter, lowercase letter, number, or other.
   Everything should be in main.

   Input Example:
   Enter a character: a

   Output Example:
   You enterd a lowercase letter.

*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("Enter a character:");
	char P;
	scanf("%c", &P);
	if (P <= 90 && P >= 65)
	{
		printf("You entered a uppercase letter.");
	}
	else if (P <= 122 && P >= 97)
	{
		printf("You entered a lowercase letter.");
	}
	else if (P <= 57 && P >= 48)
	{
		printf("You entered a number.");
	}
	else
	{
		printf("You entered a special character.");
	}
}