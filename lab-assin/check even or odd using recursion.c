    #include<stdio.h>

int fact(int );


int main(){

int n,result;
printf("Enter any number: ");
scanf("%d",&n);
result=fact(n);

if(result==0)
    printf("even");
else
    printf("odd");


}



int fact(int n){


if(n<0)
    return 0;
else
 fact(n%2);

}
