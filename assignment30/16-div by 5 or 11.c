#include<stdio.h>
int main()

{
int n;
printf("enter a number:\n ");
scanf("%d",&n);
/* ternary operator using to check the number whether it is divisible by 5 or  11*/

if (n%5==0 || n%11==0){

 printf(n%5==0 && n%11==0?"the number is divisible by both 5 and  11":n%5==0?"the number is divisible by 5":" the number is divisible by 11");

}

else
printf("the number is not divisible by both 5 and 11");

return 0;
}


