
#include<math.h>
#include<stdio.h>
int main()

{




   int n,sum=0,r;

   printf("write a number \n");
   scanf("%d",&n);





/*using while loop*/


while(n!=0){

    r=n%10;
    sum=sum+pow(r,2);
    n=n/10;






}
printf("\nthe sum of the square of digits is %d\n",sum);











}
