#include "String.h"
#include <stdio.h>

/*
Function Name : strlen
Parameters    : const char *
Return 		  : int

Description:
strlen takes a const char * and computes the length of a string
excluding the null terminating character.
*/
int Strlen(const char * string)
{
	char* length = string;
	int i = 0;
	 while (*length != '\0')
	{
		 ++length;
		i++;
	}
  return i;
}

/*
Function Name : strupper
Parameters    : char *
Return 		  : void

Description:
strupper takes a char * and converts each character to its 
respective uppercase character.
*/
void strupper(char* string)
{
	char* length = string;
	while (*length != '\0')
	{
		if (*length <= 122 && *length >= 97)
		{
			*length -= 32;
			++length;
		}
		else
		{
			++length;
		}
	}
}

/*
Function Name : strlower
Parameters    : char *
Return 		  : void

Description:
strupper takes a char * and converts each character to its 
respective lowercase character.
*/
void strlower(char * string)
{
	char* length = string;
	while (*length != '\0')
	{
		if (*length <= 90 && *length >= 65)
		{
			*length += 32;
			++length;
		}
		else
		{
			++length;
		}
	}
}

/*
Function Name : strcmp
Parameters    : const char *
const char *
Return		  : int

Description:
strcmp takes two const char * and walks both strings keeping
track of the characters in both and comparing them one by one,
if the function reaches the null terminator, and they match
up to this point, the function will return that they are equal.
*/
int strcmp(const char * string1, const char * string2)
{
	char* length = string1;
	char* longth = string2;
	int i = 0;
	while (*length != '\0' && *longth != '\0')
	{
		if (*length != *longth)
		{
			i = 1;
		}
		++length;
		++longth;
	}
	return i;
}

/*
Function Name : replacechar
Parameters    : char *
				char
				char
Return		  : void 

Description:
replacechar takes a string, and a character a to replace in the 
string, and a character b to replace with. replacechar will 
walk the string and replace all occurances of char a with char b.
*/
void replacechar(char * string, char a, char b)
{
		char replaceWith = b;
		char toBeReplaced = a;
		char* word = string;
		while (*word != '\0')
		{
			if (*word == toBeReplaced)
			{
				*word = replaceWith;
			}
			++word;
		}
		return 0;
}

/*
Function Name : palindrome
Parameters    : const char *
Return		  : int

Description:
palindrome takes a string and checks if the string reads the same
backwards as it does forward.
*/
int palindrome(const char * string)
{
	//find the length 
	int i = Strlen(string);
	char* word = string; 
	//check function
	int x = 0;
		while (x < i) //while first letter is less than last letter
		{
			if (word[x] != word[i - 1])//if x(0 (first letter)) is not equal to i(last letter) 
			{
				return 0;//return false
			}
			x++;//first letter plus one
			i--;//last letter minus one
		} 
}
