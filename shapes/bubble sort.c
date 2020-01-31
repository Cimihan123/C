
#include<stdio.h>
int main(){

    int a[5]={6,5,9,12,1};
    int i,j;
    int larg;


for (j=0;j<a[j];j++){

    for (i=0;i<a[i]-j;i++){

        if (a[i]>a[i+1])
        {

            larg=a[i];
            a[i]=a[i+1];
            a[i+1]=larg;



        }




    }


 }
 for (j=0;j<5;j++){
     printf("the form in ascending order is %d\n",a[j]);

}



}
