

#include<stdio.h>
int main(){

int i,j,a[10][10],b[10][10],c,d;

printf("Enter column: ");
scanf("%d",&c);

printf("Enter row: ");
scanf("%d",&d);

printf("Elements fr a?\n");
for (i=0;i< c;i++){
        for (j=0;j< d;j++){

   scanf("%d",&a[i][j]);

        }

}
printf("Elements for b?\n");
for (i=0;i< c;i++){
        for (j=0;j< d;j++){

   scanf("%d",&b[i][j]);
        }

}

/*Display of two matrices */
printf("Display of two matrices\n");
for (i=0;i< c;i++){
        for (j=0;j< d;j++){

        printf("\t%d",a[i][j]);
        }
printf("\n");

}
printf("\n");
for (i=0;i< c;i++){
        for (j=0;j< d;j++){

        printf("\t%d",b[i][j]);
        }
printf("\n");

}



/*Sum of square matrices */




printf("The sum is:\n");
for (i=0;i< c;i++){
        for (j=0;j< d;j++){

   printf("\t%d",a[i][j]+b[i][j]);
        }
printf("\n");
}
















}
