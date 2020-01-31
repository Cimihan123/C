#include<stdio.h>
int main()

{

float a,b,add,sub,div,multiply;
char Operator;
printf("enter a operator\n");
scanf("%c",&Operator);
printf("\nenter the vlaue a:\n");
scanf("%f",&a);
printf("\nenter the vlaue b:\n");
scanf("%f",&b);

switch(Operator)
{
case '+':

    printf("the addition is: %f\n",a+b);
    break;

case '-':
    sub=a-b;
    printf("the subtraction is: %f\n",sub);
    break;

case '*':
    multiply=a*b;
    printf("the multiplication is: %f\n",multiply);
    break;
case '/':
    div=a/b;
    printf("the division is: %f\n",div);
    break;
 default:
    printf("invalid");
    break;

}
}
