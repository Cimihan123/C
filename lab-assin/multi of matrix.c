#include<stdio.h>
int main(){

int i,j,k,mul[10][10],a[10][10],b[10][10],c,d;

printf("Enter row: ");
scanf("%d",&c);

printf("Enter column: ");
scanf("%d",&d);

printf("Elements for a?\n");
for (i=0;i< c;i++)
        for (j=0;j< d;j++)

   scanf("%d",&a[i][j]);


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



/*multiply of square matrices */

printf("The multiplication of square matrix is:\n");

for (i=0;i< c;i++){
        for (j=0;j< d;j++){
mul[i][j]=0;
  for (k=0;k< d;k++){

    mul[i][j]+=a[i][k]*b[k][j];


  }
}

}

for (i=0;i< c;i++){
        for (j=0;j< d;j++){




        printf("\t%d",mul[i][j]);

}

printf("\n");

}
return 0;









}
