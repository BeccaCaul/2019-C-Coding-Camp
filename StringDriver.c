#include "String.h"
#include <stdio.h>
#include <string.h>

#define LONGEST_WORD 50

void test1(void)
{
	int i, length;
	const char *words[] = { "Do", "not", "go", "gentle", "into", "that", "good", "night",
		"Old", "age", "should", "burn", "and", "rave", "at", "close", "of", "day"
	};

	int num_words = sizeof(words) / sizeof(*words);

	printf("\nTest1 Strlen-------------------------------------------------\n");
	
	for (i = 0; i < num_words; i++)
	{
		char buffer[LONGEST_WORD + 1];
		strcpy(buffer, words[i]);
		length = Strlen(buffer);
		printf("Word: %-8s Length: %d\n", words[i], length);
	}

}

void test2(void)
{
	int i;
	const char *words[] = { "Four", "score", "and", "seven", "years", "ago", "our",
		"fathers", "brought", "forth", "on", "this",
		"continent", "a", "new", "NATION", "fast123",
		"123  abc", "Hello!!", "", "*&^%$#8UPPERlower"
	};

	int num_words = sizeof(words) / sizeof(*words);

	printf("\nTest2 strupper-----------------------------------------------\n");
	
	for (i = 0; i < num_words; i++)
	{
		char buffer[LONGEST_WORD + 1];
		strcpy(buffer, words[i]);
		strupper(buffer);
		printf("Word: %s (%s)\n", words[i], buffer);
	}
}

void test3(void)
{
	int i;
	const char *words[] = { "I", "LOVE", "DEadLInes", "i", "LIKe", "tHe", "SOUND",
		"thEy", "MAKE", "aS", "THEY", "FLy",
		"BY", "fast123",
		"123  ABc", "HeLLo!!", "", "*&^%$#8LOWERupper"
	};

	int num_words = sizeof(words) / sizeof(*words);

	printf("\nTest3 strlower-----------------------------------------------\n");
	for (i = 0; i < num_words; i++)
	{
		char buffer[LONGEST_WORD + 1];
		strcpy(buffer, words[i]);
		strlower(buffer);
		printf("Word: %s (%s)\n", words[i], buffer);
	}
}

void test4(void)
{
	int i, result;
	const char *words1[] = { "Four", "score", "and", "seven", "years", "ago", "our",
		"fathers", "brought", "forth", "on", "this",
		"continent", "a", "new", "NATION", "fast123",
		"123  abc", "Hello!!", "", "*&^%$#8UPPERlower"
	};

	const char *words2[] = { "Four", "score", "And", "seven", "years", "ago", "our",
		"fathers", "brought", "forth", "on", "ThIs",
		"continent", "A", "new", "nation", "fast123",
		"123abc", "Hello!!", "", "*&^%$#8UPPERlower"
	};

	int num_words = sizeof(words1) / sizeof(*words1);

	printf("\nTest4 strcmp-------------------------------------------------\n");
	for (i = 0; i < num_words; i++)
	{
		result = strcmp(words1[i], words2[i]);
		printf("Word1 : %-9s Word2 : %-9s (%s)\n", words1[i], words2[i], result ? "NOT EQUAL" : "EQUAL");
	}
}

void test5(void)
{
	int i;
	char *words[] = { "Four", "score", "and", "seven", "years", "ago", "our",
		"fathers", "brought", "forth", "on", "this",
		"continent", "a", "new", "NATION", "fast123",
		"123  abc", "Hello!!", "", "*&^%$#8UPPERlower", "mississippi"
	};
	const char charA[] = {'o', 'c', 'a', 'e', 'y', 'a', 'u', 'a', 'z', 't', 't', 'i',
		't', 'a', 'N', 'n', '3', 'a', '!', 'b', '&', 'i'};
	const char charB[] = { 'y', 'b', '1', '!', 'a', 'b', 't', 'B', 'L', '*', '4', 'T',
		'l', 'e', 'q', 'w', 'a', 'B', '{', ';', '&', 'o'};

	int num_words = sizeof(words) / sizeof(*words);

	printf("\nTest5 replacechar--------------------------------------------\n");
	
	for (i = 0; i < num_words; i++)
	{
		char buffer[LONGEST_WORD + 1];
		printf("Word: %-9s ", words[i]);
		strcpy(buffer, words[i]);
		replacechar(buffer, charA[i], charB[i]);
		printf("ToReplace: %c ReplaceWith: %c Result: %s\n", charA[i], charB[i], buffer);
	}

}

void test6(void)
{
	int i, result;
	const char *words[] = {"kayak", "level", "fathers", "madam", "radar", "seven","refer", "siris", "12321",
		"tenet", "Hello", "redder", "deified", "123456", "rotator", "rotavator"};
	
	int num_words = sizeof(words) / sizeof(*words);
	
	printf("\nTest6 palindrome--------------------------------------------\n");

	for (i = 0; i < num_words; i++)
	{
		result = palindrome(words[i]);
		printf("Word: %-9s IsPalindrome : (%s)\n", words[i], result ? "TRUE" : "FALSE");
	}
}

int main(int argc, char **argv)
{
	char test=1;
	
	switch (test)
	{
	case('1') :
	{
		test1();
	}
	break;
	case('2') :
	{
		test2();
	}
	break;
	case('3') :
	{
		test3();
	}
	break;
	case('4') :
	{
		test4();
	}
	break;
	case('5') :
	{
		test5();
	}
	break;
	case('6') :
	{
		test6();
	}
	break;
	default:
	{
		test1();
		test2();
		test3();
		test4();
		test5();
		test6();
	}
	}
	
	return 0;
}