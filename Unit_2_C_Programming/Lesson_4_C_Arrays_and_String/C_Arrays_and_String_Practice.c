/*
 * ----------------------------------------------------------------------------------
 * Name      	: C_Arrays_and_String_Practice.c
 *
 * Created on	: Feb 6, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 4. C Arrays & String
 *           	  >> Practice lecture codes and notes
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

#define STRINGS
#ifdef STRINGS

int main(int argc, char **argv)
{
	char x[7];
	/* h e /0 l l /0 */

	x[0] = 'h';
	x[1] = 'e';
	x[2] = 0;
	x[3] = 'l';
	x[4] = 'l';
	x[5] = 0;

	printf("text\n");

	printf("%s\n", x);
	printf("%s\n", &x[0]); /* you have to pass the address */
	printf("%s\n", &x[1]);
	printf("%s\n", &x[3]);

	return 0;
}

#endif /* STRINGS */
