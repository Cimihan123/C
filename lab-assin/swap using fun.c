#include<stdio.h>

void swap(int ,int );
void main(){

int a,b;
printf("enter two numbers a and b\n");
scanf("%d%d",&a,&b);
printf("before swap a=%d and b=%d\n",a,b);
swap(a,b);


}



void swap(int a , int b){
/*Swapping Two Numbers */

int temp=0;

temp=a;
a=b;
b=temp;
printf("The numbers after swapping is:\n a=%d and b=%d",a,b);



}
