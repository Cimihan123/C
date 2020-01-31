
#include<strings.h>
#include<stdio.h>
int main(){

char c[100];
int i;
printf("enter:\n");
gets(c);
/* 65-90=A-Z in ASCII*/

/* 97-122=a-z in ASCII*/


/* the common difference between a-z and A-Z is 32 respectively.*/



for (i=0;c[i]!= '\0';i++)
(c[i]>=97)?printf("%c",c[i]-32):printf("%c",c[i]+32);




}









