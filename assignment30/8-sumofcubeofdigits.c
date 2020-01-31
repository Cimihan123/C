

#include<stdio.h>
int main()

{


   /*sum of sq of digits*/

   int n,sum=0,r;

   printf("write a number \n");
   scanf("%d",&n);





/*using while loop*/
while(n!=0)
{
r=n%10;
sum=sum+r*r*r;
n=n/10;




}


   printf("\nthe sum of cube of digits %d\n",sum);









}
