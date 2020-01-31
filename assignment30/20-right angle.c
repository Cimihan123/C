
#include<stdio.h>
int main()

{
int a,b,c;

/*let c be hypotenuse,a be perpendicular and c be base*/
printf("enter 3 angles   of right angle triangle:\n ");
printf("enter 1 :\n ");
scanf("%d",&a);
printf("enter 2 :\n ");
scanf("%d",&b);
printf("enter 3 :\n ");
scanf("%d",&c);



if (a+b+c==180){
   if (a+c==b || b+c==a || a+b==c)
        printf("The triangle is right angle triangle");

    else
     printf("The triangle is not right angle triangle");}
else
    printf("The triangle is not right angle triangle");



}



