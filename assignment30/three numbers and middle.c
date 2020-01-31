


#include<stdio.h>
int main()

{
int b,c,a;

/*enter two digits number */
printf("enter three numbers:\n ");

scanf("%d%d%d",&a,&b,&c);


if (a<b && b<c || b>c && b<a)
    printf("The middle number is b = %d",b);


else if (a<b && a>c || a>b && a<c)

    printf("The middle number is a = %d",a);
else
printf("The middle number is c = %d",c);



}
