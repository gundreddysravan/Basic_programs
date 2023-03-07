#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LARGEST(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))

char *getstring(void);
char *getstring()
{
    char *ptr=NULL;
    unsigned char i=0;
    fflush(stdin);
    do{
        ptr=realloc(ptr,i+1);
        ptr[i]=getchar();
    }while(ptr[i++]!='\n');
    ptr[i-1]='\0';
    return ptr;
}

void add_with_out_plus(void)
{
	int a=0,b=0;
	printf("\n*********adding without + operator************\n");
	printf("Enter the data a and b:");
	scanf("%d%d",&a,&b);
	
//    printf("\n%d",printf("%*c%*c",a,'a',b,'b'));
 printf("\naddition of two numbers is:%d",printf("%-*c%-*c",a,' ',b,' '));
}

void armstrong(void)
{
	printf("\n*********arm strong number************\n");
	int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}


void endain (void)
{
	printf("\n********* endain ************\n");
  unsigned int x = 0x76543210;
  char *c = (char*) &x;
 
  printf ("*c is: 0x%x\n", *c);
  if (*c == 0x10)
  {
    printf ("Underlying architecture is little endian. \n");
  }
  else
  {
     printf ("Underlying architecture is big endian. \n");
  }
 

}



void even_odd(void) {
    int num;
    printf("\n********* even/odd ************\n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
   
}


void factor_of_numbr(void)
{
	int num,i=0;
	printf("\n********* factor of a number ************\n");
	printf("enter a positive integer:");
	scanf("%d",&num);
	printf("factors of %d are: ",num);
	for(i=1;i<=num;++i)
	{
		if(num%i == 0)
		{
			printf("%d ",i);
		}
	}
}


void fibonacci_series(void)
{
 int n1=0,n2=1,n3,i,number;    
 printf("\n********* fibonacci series ************\n");
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);
 for(i=2;i<number;++i)
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }    
	
}




void largest_macros(void)
{  
int i=20, j=95, k=10,max;
printf("\n********* Largst of three numbers ************\n");
          
          printf("Enter the values for i,j and k:");
          scanf("%d%d%d",&i,&j,&k);
          max=LARGEST(i,j,k);
          printf("\nLargest of %8d %8d %8d is %8d\n",i,j,k,max);
}



int numbr_of_digits(void)
{
	printf("\n********* Numbr of Digits ************\n");
  long long n;
//  int count = 0;
  char count = 0;
  printf("Enter an integer: ");
  scanf("%lld", &n);
 
  do {
    n /= 10;
    ++count;
  } while (n != 0);

  printf("Number of digits: %d", count);
}

void palindrome(void)
{
	printf("\n********* Palindrome ************\n");
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("palindrome number ");    
else    
printf("not palindrome"); 
}




void prime_number(void)
{
printf("\n********* Prime Numbers ************\n");
int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

 
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

 
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);
}




//char *getstring_1()
//{
//    char *ptr=NULL;
//    unsigned char i=0;
//    do{
//        ptr=realloc(ptr,i+1);
//        ptr[i]=getchar();
//    }while(ptr[i++]!='\n');
//    ptr[i-1]='\0';
//    return ptr;
//}
void string_len(void)
{
	printf("\n********* User String length ************\n");
 char *str=NULL;
 char len;
 
 printf("Enter string:\n");
 str=getstring();

 len = mystrlen(str); 
 printf("Length of given string is: %d", len);
}


int mystrlen(char *str)
{
 char i, len=0;

 for(i=0;str[i]!='\0';i++)
 {
  len++;
 }
 return len;
}

void string_reverse(void)
{
	printf("\n********* Reverse the string ************\n");
	char *str=NULL;
	unsigned char i=0,j=0;
	printf("enter the string:");
	str=getstring();
	printf("Before reversing the string:%s\n",str);
	j=strlen(str)-1;
	for(i=0;i<j;i++,j--)
	{
		str[strlen(str)+1]=str[i];
		str[i]=str[j];
		str[j]=str[strlen(str)+1];
	}
	str[strlen(str)+1]='\0';
	printf("After reversing the string:%s\n",str);
}





void swap(void)
{
		printf("\n********* Swap two numbers ************\n");
		int a=10, b=20;      
		printf("Before swap a=%d b=%d",a,b);      
		a=a+b;  
		b=a-b; 
		a=a-b;  
		printf("\nAfter swap a=%d b=%d",a,b);  
}



int vowel_consonant(void)
{
    char *s=NULL;  
    int i,vowels=0,consonants=0;
 
    printf("Enter  the string : ");
   s=getstring();
     
    for(i=0;s[i];i++)  
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
    	{
		
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vowels++;
            else
             consonants++;
        }
 
 	}
 	
     
    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);
    
    return 0;
}



