


#include<stdio.h>
int main()

{
float i=1,n,sum=0;

/*enter two digits number */
printf("enter a number:\n ");

scanf("%f",&n);
/* for (i=1;i<=n;i++){

   sum+=(1/i);



}*/

while(n>=i){


   sum+=(1/i);
   i++;

}

printf("the sum of harmonic series %f",sum);


}



