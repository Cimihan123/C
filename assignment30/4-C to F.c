#include<stdio.h>
int main()

{


   /*converting   centigrade into fahrenheit*/
   /* formula (32°F − 32) × 5/9 */

   float F=0,C;

   printf("enter the centigrade value \n");
   scanf("%f",&C);

   F=(C * 9/5)+32;
   printf("the fahrenheit value is %.2f",F);




}
