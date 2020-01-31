
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b,c,r,temp,sum;


for(a=1000;a<=9999;a++){


c=a;
temp=0;
sum=0;
while(c!=0){

    r=c%10;
    sum=sum*10+r;
    c=c/10;


}
if (sum==a){
 b=sum;

printf("the  palindrome is:%d\n",b);

}

if (b>temp)
 temp=b;


}

printf("the highest palindrome is:%d\n",temp);









}




















