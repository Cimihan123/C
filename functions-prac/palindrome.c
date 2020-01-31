
#include <stdio.h>
#include<stdlib.h>


int palin(int  );


void main(){

int n, sum,a;
printf("enter the no. u want to check:\n");
scanf("%d",&n);
a=palin(n);

if (n==a){

    printf("no. is palindrome");
}


else {printf("it is not palindrome");}

}




int palin(int n){
int r,sum=0;

    while(n!=0) {


        r=n%10;
        sum=sum*10+r;
        n=n/10;

    }

return sum;



}












