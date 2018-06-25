#include<stdio.h>

//Program without main function.
#define fun main
int fun()
{
	
	
/* 	int y=18;
	const int x=y;
	printf("%d",x); */


/*	//Return type of printf.
	int i;
	i=printf("Ajay Seshu Kumar Kondisetty");
	printf("\n%d",i); */
	
	
		
/* // Swapping Two Numbers without using Third Variable.
	int a=2,b=3;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a = %d  b = %d",a,b); */


	
/*	// Hello World Program without using semicolon.
	if(printf("Hello World"))
	{
		
	} */




/*	// Calculating Length of a string without using string functions.
	int b;
	char a[50];
	gets(a);
	b=printf("%s",a);
	printf("\nLength of string is %d",b); */




/* // Expression inside switch statement will not be executed.
	int x=1;
	switch(x)
	{
		x=x+1;
		case 1: printf("1");
				break;
		case 2: printf("2");
				break;
		default : printf("Other");
				break;
	} */	
	
	
	
	
	
/*	Difference between structure and union is:--
	1. The amount of memory required to store a structure variable is equal to the sum of all the data elements present in it.
			Eg:- 1 char(1 byte), 1 int(2 bytes), 1 float(4 bytes) so Memory required is 7 bytes.
	2. The amount of memory required to store a union variable is that required by the largest member.
			Eg:- 1 char(1 byte), 1 int(2 bytes), 1 float(4 bytes) so Memory required is 4 bytes. */ 
		
		
		
		
		
/*	// The output of the following program is "abcxyz", because p+2 is p[2] so now we consider the p string from 2nd index value so now 
	// printf will be printf("%s%c%s","abcd",a,"xyz") so now we will get abcd as output for first %s in printf, then for %c will be taken
	// from a which is 8 but since %c 8 will be converted into char which is backspace according to ASCII values, now output will be 
	// abc then for last %s xyz will be printed, then final output is "abcxyz".			
	char p[]="ok%s%c%s";
	int a=8;
	printf(p+2,"abcd",a,"xyz"); */

		
		
/*	// The output of the following program is "d", because if we have any addition operation in the printf first part then the part before 
	// operation is treated as string, so now here %d is treated as a string and because of +1 it will print the letter at index 1, so ans 
	// will be "d".
	short int a=5;
	printf("%d"+1,a); */ 
	
	
	
/*	// The output of the following program is "teachion", because %c will get value from a which 13 and which has to be converted in to 
	// character according to ASCII value which is "\r" for 13. champion\rteach \r will take pointer to the first and it will replace the
	// current letters with the letters wich come after the \r. so output is teachion.
	int a=13;
	printf("champion%cteach",a); */
	
	
}
