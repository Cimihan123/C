

#include<math.h>
#include<stdio.h>
int main()

{
int i,sum=0,x,n;

/*enter two digits number */
printf("enter a number:\n ");

scanf("%d",&n);
scanf("enter x %d",&x);
for (i=1;i<=n;i++){

    if (n%2==0){
        sum=sum-pow(x,i);
        else
            sum=sum+pow(x,i);

    }
    printf("the sum is %d",sum);

}




