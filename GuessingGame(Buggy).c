/* Write a guessing game that prompts the user to guess a number until they choose correctly
   Use a define macro to define the correct answer.
   
   Input Example:
   Pretend the correct answer is 72
   Guess a number: 9

   Output Example:
	Too Low! Guess Again!

	- other output should be too high or correct

   Input Example 2:
   Pretend correct answer is 72
   Guess a number: 75

   Output Example:
	Too high! Guess Again!

   Input Example 3:
   Pretenc correct answer is 72
   Guess a number: 72

   Output Example 3:
   Correct!
*/

	/* choose a number to be the correct number of the game */
#define CorrectAnswer
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int RandomInt(int low, int high)
{
  return rand() % (high - low + 1) + low;
}
int main(void)
{
	srand(time(NULL));
	int number = RandomInt(1, 50); 
	printf("Guess a number baka! Between 1 and 50...\n");
	int guess1;
	scanf("%d", &guess1);
	if (guess1 < number)
	{
		printf("Guess higher baka...\n");
	}
	else if (guess1 > number && guess1 < 50)
	{
		printf("Dummy... your guess is too high... baka...\n");
	}
	else if (guess1 > 50)
	{
		printf("why do I even try with you, baka! I said 1 to 50! Dummy...\n");
	}
	else if (guess1 == number)
	{
		printf("It's just beginners luck...\n");
	return 0;
	}
	printf("You better not mess this up again... baka!\n");
	int guessmain;
	scanf("%d", &guessmain);
	if (guessmain > number && guessmain < 50)
	{
		printf("Dummy... your guess is too high... baka...\n");
	}
	else if (guessmain < number)
	{
		printf("Guess higher baka...\n");
	}
	else if (guessmain > 50)
	{
		printf("why do I even try with you, baka! I said 1 to 50! Dummy...\n");
	}
	else
	{
		printf("Baka... took you long enough!\n");
		return 0;
	}
	int guessmainmain;
	scanf("%d", &guessmainmain);
	while (guessmainmain != number)
	{
		if (guessmainmain > number && guessmainmain < 50)
		{
		printf("Dummy... your guess is too high... baka...\n");
		scanf("%d", &guessmainmain);
		}
		else if (guessmainmain < number)
		{
		printf("Guess higher baka...\n");
		scanf("%d", &guessmainmain);
		}
		else if (guessmainmain > 50)
		{
		printf("why do I even try with you, baka! I said 1 to 50! Dummy...\n");
		scanf("%d", &guessmainmain);
		}
		
	}
	printf("Baka... took you long enough!\n");
}

