#include<stdio.h>
#include<math.h>

int main(){

int a,b,c;

float y,r1,r2;
printf("Write coefficients a ,b and c.\n");

scanf("%d%d%d",&a,&b,&c);

/* calculations part*/

y=(b*b-4*a*c);


if (y<0)
    printf("The roots are imaginary.\n");
else if (y==0){

    printf("One real root\n");


    printf("%d",-b/(2*a));}

else{
    printf("Two Complex Roots Are :\n");

    printf("r1=%.2f   and   r2=%.2f",(-b+sqrt(y))/2*a,(-b-sqrt(y))/2*a);}






}
