#include<stdio.h>
#include<string.h>
int main(){


char i,r,str[100];
int c,j;
gets(str);
int count1=0;
int count=0;

/* counting  characters*/

for (i='a' ;i<='z' ;i++  ){
for (c=0;str[c]!='\0';c++){
if(str[c]==i){
    count++;}}}
int count2=0;
for (i='A' ;i<='Z' ;i++  ){
for (c=0;str[c]!='\0';c++){
if(str[c]==i){
    count2++;}}}
printf("The characters present in string is %d\n",count2+count);





/* counting  numbers*/
for (c=0;str[c]!='\0';c++){

for(j='0';j<='9';j++){
     if(str[c]==j){
    count1++;}}
}
printf("The number present in strings is %d\n",count1);


/* counting  special characters*/
printf("The special characters present in string is %d",strlen(str)-(count1+count+count2));



}

