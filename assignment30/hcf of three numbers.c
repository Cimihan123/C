
#include<stdio.h>
int main(){

int n1,n2,n3,i,max,j;
printf("enter  n1:\n");
scanf("%d",&n1);
printf("enter  n2:\n");
scanf("%d",&n2);
printf("enter  n3:\n");
scanf("%d",&n3);
for (i=1;i<=n1;i++){
/* using nested if */
   if (n1%i==0 && n2%i==0 && n1%i==0 && n3%i==0 ){
       if (i>max)

        max=i;


}

}
printf("\nthe hcf is:%d",max);

}

