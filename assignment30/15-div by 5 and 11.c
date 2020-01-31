#include<stdio.h>
int main()

{
int n;
printf("enter a number:\n ");
scanf("%d",&n);
/* ternary operator using to check the number is divisible by both 5 and 11*/
(n%5==0 && n%11==0)?printf("the number is divisible by both 5 and 11"):printf("the number is not divisible by both 5 and 11");


}


