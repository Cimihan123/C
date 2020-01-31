

#include<stdio.h>
int main()

{
int n,a;

/*enter two digits number */
printf("enter a number:\n ");

scanf("%d",&n);
/*while loop to print 2 digits */
/* n>10 and n>100 using this in loop means digit more than one and less than 3 */
while(n>10 && n>100){


    n=n/10;

}
/* dividing 2 digits to print last digit*/
a=n%10;


printf("the middle number is:%d\n",a);





}
/* note : it can be also used  to find the second digit of the numbers which can more than 3 or many digits*/


