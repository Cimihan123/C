
#include<stdio.h>
#include<string.h>
int main(){


char re,ree,str[100];
int c,i,j;

printf("Enter a string: ");
gets(str);
printf("Enter which character you wanna replace of string '%s' :",str);
scanf("%c",&re);
getchar();

printf("\nWhat is that character which gonna replace?\n");
scanf("%c",&ree);

for (c=0;str[c]!='\0';c++)
{
if (str[c]==re){
if (str[c]==re){

        str[c]=ree;}
else
    printf("\nThere is not a mention character:");

}

}
printf("The string after replacing last occurrence becomes: %s",str);




}

