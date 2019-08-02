#define STRING_EQUAL 0
#define STRING_LESS_THAN -1
#define STRING_GREATER_THAN 1
/*
Function Name : strlen
Parameters    : const char *
Return 		  : int

Description:
strlen takes a const char * and computes the length of a string
including the null terminating character.
*/
int Strlen(const char * string);

/*
Function Name : strupper
Parameters    : char *
Return 		  : void

Description:
strupper takes a char * and converts each character to its 
respective uppercase character.
*/
void strupper(char * string);

/*
Function Name : strlower
Parameters    : char *
Return 		  : void

Description:
strupper takes a char * and converts each character to its 
respective lowercase character.
*/
void strlower(char * string);

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
***This function is case sensitive***
*/
int strcmp(const char * string1, const char * string2);

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
void replacechar(char * string, char a, char b);

/*
Function Name : palindrome
Parameters    : const char *
Return		  : int

Description:
palindrome takes a string and checks if the string reads the same
backwards as it does forward.
*/
int palindrome(const char * string);
