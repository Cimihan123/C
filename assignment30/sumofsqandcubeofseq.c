

#include<math.h>
#include<stdio.h>
int main()

{
int i,sum=0,sum1=0,total,x,n;


printf("enter n:\n ");

scanf("%d",&n);
printf("enter x :\n ");
scanf("%d",&x);
for (i=1;i<=n;i++){

    if (i%2==0){
        sum=sum-pow(x,i);}
        else{
            sum1=sum1+pow(x,i);

    }
    total=sum+sum1;
}


printf("the sum is %d",total);



}
