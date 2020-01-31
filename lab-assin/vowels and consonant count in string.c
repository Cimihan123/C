
#include<stdio.h>
#include<string.h>
int main(){


char r,str[100];
int c,i,j;
gets(str);
int count=0,count2=0;
char vow[11]="aeiouAEIOU";



for (i=0;vow[i]!='\0';i++){
for (c=0;str[c]!='\0';c++){
if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122){
    count++;}    }}
printf("The vowel present in string is %d\n",count);




printf("The consonant present in string is %d", strlen(str)-count);



}

