
#include<stdio.h>
int main(){

int n,n1,r;


int sum=0,product=1;
printf("enter two digits number:\n");
scanf("%d",&n);
n1=n;
while(n!=0){

r=n%10;
sum=sum+r;
product=product*r;
n=n/10;



}

printf("The sum  of two digits is %d",sum);
printf("\nThe product of two digits is %d",product);

int total;
total=sum+product;
printf("\nThe total is %d",total);


if (total== n1)
    printf("\nSpecial number");
else
    printf("\nNot special");


}
