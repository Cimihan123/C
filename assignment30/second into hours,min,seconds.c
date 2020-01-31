
#include<stdio.h>
int main(){

int  h,m,s,sec;
printf("enter  seconds:\n");
scanf("%d",&s);

/* in hour*/
h=s/3600;
s=s%3600;
/* in minute*/

m=s/60;

/* in seconds*/
sec=s%60;


printf("The second In hour is %d hr in minute is %d min.  \n and in second is %d sec.",h,m,sec);




}

