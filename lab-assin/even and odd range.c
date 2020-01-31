#include<stdio.h>

int fact(int,int );


int main(){

int n,st,result;
printf("Enter initial number: ");
scanf("%d",&st);
printf("Enter final number: ");
scanf("%d",&n);
result=fact(st,n);

printf("%d",result);



}



int fact(int n,int st){


if(st>n)

return (fact(n+2),n);

}
