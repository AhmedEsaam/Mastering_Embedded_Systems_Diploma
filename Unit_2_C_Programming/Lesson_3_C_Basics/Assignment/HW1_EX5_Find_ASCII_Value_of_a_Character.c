/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW1_EX1_Print_a_Sentence.c
 *
 * Created on	: Feb 1, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 1 >> EX5 - Find ASCII Value of a Character
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &c);
	printf("ASCII value of %c = %d\n", c, c);

	return 0;
}


