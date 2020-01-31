


#include<stdio.h>
int main()

{
float i,n,j,sum=0;

/*enter two digits number */
printf("enter a number:\n ");

scanf("%f",&n);


/* for upper loop */
for (i=1;i<=n;i++){
/*for factorial and let factorial be f */
int f=1;
   for (j=1;j<=i;j++)

   {
       f*=j;


   }


sum+=i/f;
}

printf("the sum of sequence is : %f",sum);
return 0;

}





