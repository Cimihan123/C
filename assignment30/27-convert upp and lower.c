

#include<stdio.h>
int main(){
/* cp=cost price ,sp=selling price*/
char c;
int i;
printf("enter a character:\n");
scanf("%c",&c);
/* 65-90=A-Z in ASCII*/

/* 97-122=a-z in ASCII*/


/* the common difference between a-z and A-Z is 32 respectively.*/

(c>=97)?printf("the uppercase is %c",c-32):printf("the lowercase is %c",c+32);




}









