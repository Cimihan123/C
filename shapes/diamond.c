
#include<stdio.h>
int main(){

int i,k,j,n;

printf("enter n:");
scanf("%d",&n);

for(i=1;i<n;i++){

    for (j=n;j>=i+1;j--)
    printf(" ");



    printf("*");

    for (j=2;j<=i;j++)
    printf("  ");




    printf("*");
printf("\n");





}


for(i=2;i<=n;i++){

    for (j=3;j<=i+1;j++)
    printf(" ");





    printf("*");
    for (j=n;j>i;j--)
    printf("  ");



    printf("*");
printf("\n");





}



}

