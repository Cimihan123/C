

#include<stdio.h>
int main(){
/* cp=cost price ,sp=selling price*/
float  cp,sp,profit,loss;
printf("enter  cp:\n");
scanf("%f",&cp);
printf("enter  sp:\n");
scanf("%f",&sp);

/* profit calculation*/

profit=((sp-cp)/cp)*100;
/* loss  calculation*/

loss=((cp-sp)/cp)*100;
/*using ternary operator */

(profit>loss)?printf("Profit is  %.2f",profit):(loss>profit)?printf("Loss is %f",loss):("No loss,No profit");






}

