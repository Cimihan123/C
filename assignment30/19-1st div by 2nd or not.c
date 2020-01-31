#include<stdio.h>
int main()

{
int n,S;
printf("enter two digits number:\n ");
scanf("%d",&n);

S=n%10;
while(n>10){


    n=n/10;

}

(S%n==0)?printf("the 1st digit is div. by 2nd"):printf("the 1st digit is not div. by 2nd");






}



