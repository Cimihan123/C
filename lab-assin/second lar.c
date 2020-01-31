
#include<stdio.h>
int main(){

int i, n,a[100];
int max,pos;


printf("Size:");
scanf("%d",&n);
printf("Elements of arrays?\n");
for (i=0;i< n;i++){

   scanf("%d",&a[i]);
}

max=0;
/*second largest */
for (i=0;i<n;i++){

    if (max<a[i]){
            pos=max;
        max=a[i];


}

else if (a[i]>pos && a[i]< max)
pos=a[i];

    }

printf("The second largest number in array is :%d\n",pos);





















}
