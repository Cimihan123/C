#include<stdio.h>
int main(){
char a[1000];
int i,key;
char b;
printf("enter the plain text:\n");
gets(a);

printf("Your secret key :\n");
scanf("%d",&key);


printf("Your cipher text is :\n");
for(i=0;a[i]!='\0';i++){


if (a[i]>='a' && a[i]<='z'  ){


       b=a[i]+key;


}

if (a[i]>='A' && a[i]<='Z' ){


       b=a[i]+key;


}







printf("%c",b);




}






}

























