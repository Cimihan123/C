
#include<stdio.h>
int main()

{
int n;
printf("enter a number:\n ");
scanf("%d",&n);
/* ternary operator using to check the number whether it is divisible by 5 or  11*/

if (n%5==0 && n%11!=0){
 printf("the number is divisible by 5 but not by  11");

}


return 0;
}


