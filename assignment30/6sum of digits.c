
#include<stdio.h>
int main()

{


   /*sum of digits*/

   int n,sum=0,r;

   printf("write a number \n");
   scanf("%d",&n);





/*To find the sum of digits*/
while(n!=0)
{
r=n%10;
sum=sum+r;
n=n/10;




}


   printf("\nthe sum of  digits is %d\n",sum);









}
