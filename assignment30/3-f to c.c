#include<stdio.h>
int main()

{


   /*converting fahrenheit into centigrade*/
   /* formula (32°F − 32) × 5/9 */

   float F,C=0;

   printf("enter the fahrenheit value \n");
   scanf("%f",&F);

   C=(F-32)*5/9;
   printf("the celsius value is %.2f",C);




}
