
#include<stdio.h>
int main(){

int i, n,a[100];
int max,min;


printf("Size:");
scanf("%d",&n);
printf("Elements of arrays?\n");
for (i=0;i< n;i++){

   scanf("%d",&a[i]);
}
min=a[0];
max=a[0];
/*Maximum Part*/
for (i=1;i<n;i++){
    if (max<a[i]){
         max=a[i];
    }
/*Minimum Part*/
    if (min>a[i]){
         min=a[i];
    }

}
printf("The maximum number in array is :%d\n",max);
printf("\nThe minimun number in array is :%d\n",min);
 return 0;

























}
