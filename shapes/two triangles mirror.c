#include<stdio.h>
int main(){

    int i,j,k,l,m;

    int n=10;

for (i=0;i<=n;i++)

{
for (j=0;j<=i;j++){
    printf(" ");
}
for (k=n;k>=i;k--){
 printf("*");}
 for (k=1;k<n-6;k++){
    printf(" ");
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
for (k=n;k>=i;k--){
 printf("*");}
printf("\n");









}


}
