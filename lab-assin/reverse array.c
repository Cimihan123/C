
#include<stdio.h>
int main(){


int i,a[100],s;



printf("Enter size: ");
scanf("%d",&s);



for (i=0;i<s;i++){

   scanf("%d",&a[i]);
        }


printf("Reverse is : ");
for (i=s-1;i>=0;i--){

   printf("%d\t",a[i]);
        }











}
