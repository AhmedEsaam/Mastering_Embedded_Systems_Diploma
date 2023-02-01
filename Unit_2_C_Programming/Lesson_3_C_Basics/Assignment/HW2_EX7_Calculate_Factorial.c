/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW2_EX7_Calculate_Factorial.c
 *
 * Created on	: Feb 2, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 2 >> EX7 - Calculate the Factorial of a Number
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	while(1)
	{
		int num, fact = 1;
		printf("Enter an integer: ");
		fflush(stdout);
		scanf("%d", &num);

		if (num < 0)
			printf("Error!!! Factorial of negative numbers doesn't exist.\n\n");
		else if (num == 0)
			printf("Factorial = 1\n\n");
		else
		{
			while(--num)
			{
				fact *= (num + 1);
			}
			printf("Factorial = %d\n\n", fact);
		}
	}

	return 0;
}















