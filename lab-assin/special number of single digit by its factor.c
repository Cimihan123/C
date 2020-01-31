#include<stdio.h>
int main(){

int n,i;
int sum=0;
printf("enter a number:\n");
scanf("%d",&n);
for (i=1;i<n;i++){

/*divide number by i to display multiple numbers  */

   if (n%i==0)
{
    sum=sum+i;
printf("\nthe factor  numbers  are:%d",i);
}
/*printing numbers which are divided by i */


}


 printf("\nthe sum is:%d",sum);

printf(sum==n?"\nSpecial number":"\nNot a special number");


}



