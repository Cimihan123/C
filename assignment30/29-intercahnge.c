
#include<stdio.h>
int main(){

    int a,b,temp;

printf("enter two numbers a and b:\n");

scanf("%d",&a);
scanf("%d",&b);

printf("without swap a=%d and b=%d\n",a,b);

/*swapping two numbers*/
temp=a;
a=b;
b=temp;

printf("with swap a=%d and b=%d",a,b);
}
