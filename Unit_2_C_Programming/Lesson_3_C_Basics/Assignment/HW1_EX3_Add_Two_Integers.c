/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW1_EX3_Add_Two_Integers.c
 *
 * Created on	: Feb 1, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 1 >> EX3 - Add Two Integers
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int num1, num2;
	printf("Enter two integers: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &num1, &num2);
	printf("Sum: %d\n", num1 + num2);

	return 0;
}


