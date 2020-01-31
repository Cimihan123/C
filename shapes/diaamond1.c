

#include<stdio.h>

int main(){

int i,k,j,n;




for(i=1;i<8;i++){

    for (j=8;j>=i;j--){

    printf(" ");

    }


for (j=1;j<=i;j++){

    printf("* ");

    }
printf("\n");}






for(i=1;i<8;i++){

    for (j=1;j<=i+1;j++){

    printf(" ");

    }


for (j=9;j>i+1;j--){

    printf("* ");

    }
printf("\n");}










}

