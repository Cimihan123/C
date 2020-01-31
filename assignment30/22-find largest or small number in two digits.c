

#include<stdio.h>
int main()

{
int n,S;

/*enter two digits number */
printf("enter two digit number:\n ");

scanf("%d",&n);

S=n%10;
while(n>10){


    n=n/10;

}
printf("%d\n",n);
(S>n)?printf("the largest no. is %d\n",S):printf("the largest no. is %d\n",n);
(S<n)?printf("the smallest no. is %d\n",S):printf("the smallest no. is %d\n",n);




}



