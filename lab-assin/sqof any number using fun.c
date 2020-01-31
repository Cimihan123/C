#include<stdio.h>

void square(int );




void square(int n){
/*Square of any Number */


n=n*n;
printf("The Square of a number: %d ",n);



}

void main(){

int n;
printf("Enter any number: ");
scanf("%d",&n);
square(n);


}

