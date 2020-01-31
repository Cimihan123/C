#include<stdio.h>
int main()

{


  /* sum of first digit and last number of a number*/

   int a,sum=0,b;

   printf("write a number \n");
   scanf("%d",&a );



b=a%10;

/*To find the first digit of a number divide it by 10 until number is greater than 10*/
while(a>10)
{
a=a/10;



}
sum=a+b;

   printf("\nthe sum of last and first digit is %d\n",sum);









}
