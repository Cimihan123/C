#include<stdio.h>
int main()

{
int a,b,c,P,H;

/*let c be hypotenuse,a be perpendicular and c be base*/
printf("enter 3 sides   of right angle triangle:\n ");
printf("enter perpendicular :\n ");
scanf("%d",&a);
printf("enter base :\n ");
scanf("%d",&b);
printf("enter hypotenuse :\n ");
scanf("%d",&c);





/*hypotenuse=H and sum of sq of base and perpendicular=P*/
H=c*c;
P=a*a+b*b;

(H==P)?printf("the triangle is a right angled triangle"):printf("the triangle is not aright angled triangle");






}



