#include<stdio.h>
int main()

{

    float area=0,circumference=0,r;
    const float pi=3.14;

    printf("enter a radius:\n");
    scanf("%f",&r);

    area=pi*r*r;
    circumference=2*pi*r;
    printf("The area is %f \n and \n      the circumference is %f",area,circumference);

}
