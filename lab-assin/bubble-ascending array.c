
#include<stdio.h>
int main(){

int i,j, n,a[100];
int max,min;


printf("Size:");
scanf("%d",&n);
printf("Elements of arrays?\n");
for (i=0;i< n;i++){

   scanf("%d",&a[i]);
}
int temp;
for(i=0;i<n-1;i++){
  for(j=i+1 ;j<n;j++){
    if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;}}}

printf("ascending:\n");
for(i=0;i<n;i++){

    printf("\n%d",a[i]);

}
























}
