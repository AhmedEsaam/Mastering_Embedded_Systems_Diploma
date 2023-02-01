/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW1_EX2_Print_an_Integer_Entered_by_User.c
 *
 * Created on	: Feb 1, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 1 >> EX2 - Print an Integer Entered by User
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int num;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	printf("You entered: %d\n", num);

	return 0;
}


