
#include<stdio.h>

int fact(int );


int main(){

int n,f,result;
printf("Enter any number: ");
scanf("%d",&n);
result=fact(n);

printf("The factorial is %d",result);
}



int fact(int n){


if(n<1)
    return 1;
else
    return(n*fact(n-1));

}
