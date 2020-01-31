
#include<stdio.h>
#include<string.h>
int main(){


char re,str[100];
int c,j;

printf("Enter a string: ");
gets(str);
printf("Enter a character to replace with last occurrence of a string '%s' :",str);
scanf("%c",&re);


/* just length part*/
j=strlen(str);

for (c=0;str[c]!='\0';c++){


str[j-1]=re;

}
printf("The string after replacing last
       occurrence becomes %s\n",str);




}

