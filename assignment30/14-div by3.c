#include<stdio.h>
int main()

{
int n;
printf("enter a number:");
scanf("%d",&n);
/* ternary operator using to check the number is divisible by 3 or not*/

printf(n%3==0?"the number is divisible by 3":            "the number is not divisible by 3");

return 0;
}


