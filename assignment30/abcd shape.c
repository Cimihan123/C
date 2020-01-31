
#include<stdio.h>
int main(){

int n,i,j,k;



for(i=1;i<=6;i++){

    for (j=6;j>=i;j--)
    printf(" ");

  for (j=1;j<=i;j++)
 printf("%c",64+i);

for (k=2;k<=i;k++)
 printf("%c",64+i);
  printf("\n");




}


}

