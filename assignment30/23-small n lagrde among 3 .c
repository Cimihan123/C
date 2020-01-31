

#include<stdio.h>
int main()

{
int a,b,c;

/*enter three  numbers */
printf("enter 3 number:\n ");

scanf("%d%d%d",&a,&b,&c);

(a>b && a>c)?printf("\nthe largest number is a %d\n",a):(b>c)?printf("\nthe largest number is a %d\n",b):printf("\nthe largest number is a %d\n",c);


(a<b && a<c)?printf("\nthe smallest number is a %d\n",a):(b<c)?printf("\nthe smallest number is a %d\n",b):printf("\nthe smallest number is a %d\n",c);



}
