#include<stdio.h>
int main()

{

    float SI=0,P,R,T;
    printf("Enter principal,rate amd time.\n");
    scanf("%f%f%f",&P,&R,&T);
    SI=(P*T*R)/100;
    printf("The simple interest is %.2f",SI);
    return 0;

}
