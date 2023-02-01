/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW2_EX4_Check_Whether_a_Num_Positive_or_Negative.c
 *
 * Created on	: Feb 1, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 2 >> EX4 - Check Whether a Number Positive or Negative
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	float num;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f", &num);
	if (num == 0)
	{
		printf("You entered zero.\n");
	}
	else
	{
		printf("%f is %s.\n", num, (num > 0)? "positive" : "negative");
	}

	return 0;
}
