

#include<stdio.h>
int main(){

int i,j,a[10][10],c,d,transpose[10][10];

printf("Enter row: ");
scanf("%d",&c);

printf("Enter column: ");
scanf("%d",&d);



printf("Elements?\n");
for (i=0;i< c;i++){
        for (j=0;j< d;j++){

   scanf("%d",&a[i][j]);
        }

}

/*Without transpose*/
printf("The matrix is:\n");
for (i=0;i< c;i++){
        for (j=0;j< d;j++)
        printf("\t%d",a[i][j]);
    printf("\n");

}

/*Transpose*/
printf("\nThe transpose of given matrix is:\n");

for (i=0;i< c;i++)
        for (j=0;j< d;j++)

                transpose[j][i]=a[i][j];







for (i=0;i< d;i++){
        for (j=0;j< c;j++)

                printf("\t%d",transpose[i][j]);


    printf("\n");

}





















}
