#include <stdio.h>
#include <stdlib.h>
#include"basic_programs.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	printf("enter");
unsigned char choice=0;
	while(1)
	{
	printf("\n\n\n");
	printf("enter the respctive values for below mentiond menu\n1.Add Two numbers with out plus operator\n2.Armstrong number\n3.Little or Big Endain\n4.Even or Odd number\n");	
	printf("5.Factor of a number\n6.Fibonacci series\n7.Largest of three numbers\n8.Number of Digits\n9.Palindrme\n10.Prime number\n11.User string length\n12.String reverse\n");
	printf("13.Count number of vowels and consonants\n14.swap two numbers\n");
	printf("15.Exit\n\n\n");

	
	printf("enter the choice:");			
   scanf("%d",&choice);
   switch(choice)
   {
   	case 1:
   	{
//   			printf("choice 1\n");
     add_with_out_plus();
     

	}
	break;
	case 2:
	{
//			printf("choice 2\n");
	 armstrong();
	}break;
	case 3:
   	{
   			endain ();
	}break;
	case 4:
	{
		even_odd();
	}break;
	case 5:
   	{
   			factor_of_numbr();
	}break;
	case 6:
	{
		fibonacci_series();
	}break;
	case 7:
   	{
   			largest_macros();
	}break;
	case 8:
	{
		numbr_of_digits();
	}break;
	case 9:
   	{
   			palindrome();
	}break;
	case 10:
	{
		prime_number();
	}break;
	case 11:
   	{
   			string_len();
	}break;
	case 12:
	{
		string_reverse();
	}break;
	case 13:
   	{
   			vowel_consonant();
	}break;
	case 14:
	{
		swap();
	}	break;
		case 15:
	{
		exit(0);
	}	break;
	
	default:
	{
			printf("\nentered wrong data\n");
	}
	
   }
			
			
			
		}
			
			
		
	return 0;
}

