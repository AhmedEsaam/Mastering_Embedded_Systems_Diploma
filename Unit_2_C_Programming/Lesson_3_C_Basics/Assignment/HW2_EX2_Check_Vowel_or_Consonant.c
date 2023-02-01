/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW2_EX2_Check_Vowel_or_Consonant.c
 *
 * Created on	: Feb 1, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 2 >> EX2 - Check Whether an Alphabet Vowel or Consonant
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	char a;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c", &a);

	if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ||
		a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
	{
		printf("%c is a vowel.\n", a);
	}
	else
	{
		printf("%c is a consonant.\n", a);
	}

	return 0;
}
