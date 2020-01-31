#include<stdio.h>
#include<stdlib.h>
void evenodd(int ,int);

void main(){

int n2,n1;
printf("Enter low number: ");
scanf("%d",&n2);
printf("Enter up number: ");
scanf("%d",&n1);
printf("The even/odd numbers are is %d to   %d",n2,n1);
evenodd(n2,n1);

return 0;



}



void evenodd(int n,int limit){


if(n>limit)
    return ;
    printf("%d",n);

     evenodd(n+2,limit);




}
