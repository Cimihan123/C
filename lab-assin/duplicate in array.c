
#include<stdio.h>
int main(){

int i,j ,n,a[100];



printf("Size:");
scanf("%d",&n);
printf("Elements of arrays?\n");
for (i=0;i< n;i++){

   scanf("%d",&a[i]);
}


int count=0;
for (i=0;i< n;i++){
for (j=i+1;j<n;j++){
    if (a[i]==a[j])
    {count++;
  break;
    }}}


printf("The duplicate number/s is/are:%d",count);















}

