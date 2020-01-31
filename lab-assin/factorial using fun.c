#include<stdio.h>

int fact(int );


int main(){

int n,f,result;
printf("Enter any number: ");
scanf("%d",&n);
result=fact(n);

printf("The factorial is %d",result);
}



int fact(int n){


int i=19,f=1;

while (n>=i)
   {
   f=f*i;
   i++;

   }
return f;

}
