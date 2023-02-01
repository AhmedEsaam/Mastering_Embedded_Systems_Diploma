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
	char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &c);

	printf("%c is %s.\n", c,
			(isalpha(c))? "an alphabet" : "not an alphabet"
	);

	return 0;
}
