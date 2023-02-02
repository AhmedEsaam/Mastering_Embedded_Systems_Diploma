/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW2_EX5_Check_Whether_a_Character_Alphabet_or_Not.c
 *
 * Created on	: Feb 2, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 2 >> EX5 - Check Whether a Character is Alphabet or Not
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	do
	{
		char c;
		printf("Enter a character: ");
		fflush(stdin); fflush(stdout);
		scanf("%c", &c);

		printf("%c is %s.\n", c,
				isalpha(c)? "an alphabet" : "not an alphabet"
		);

		/* Or: */
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			printf("%c is an alphabet.\n\n", c);
		else
			printf("%c is not an alphabet.\n\n", c);

		printf("Another entry? (y/n): ");
		fflush(stdin); fflush(stdout);
	}
	while(getchar()=='y');

	return 0;
}
