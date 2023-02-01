/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW2_EX1_Check_Whether_a_Num_Even_or_Odd.c
 *
 * Created on	: Feb 1, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 2 >> EX1 - Check Whether a Number is Even or Odd
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int num;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d", &num);
	printf("%d is %s.\n", num, (num % 2 == 0)? "even" : "odd");

	return 0;
}
