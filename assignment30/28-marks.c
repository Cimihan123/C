
#include<stdio.h>
int main(){

    float a,b,c,d,e ;
    float total,percentage;


printf("first subject mark \n");

scanf("%f",&a);
printf("second subject mark \n");
scanf("%f",&b);
printf("third subject mark \n");
scanf("%f",&c);
printf("fourth subject mark \n");
scanf("%f",&d);
printf("fifth subject mark \n");
scanf("%f",&e);


total=a+b+c+d+e;

printf("\nthe total marks is: %.2f:\n",total);
percentage=(total/500)*100;

printf("\nthe percentage is: %.2f%\n ",percentage);


/*division */
(percentage==100 || percentage >=90)?printf("100 % result and A+"):(percentage>=80 && percentage <90 )?printf("A \n"):(percentage>=70 && percentage <80)?printf("B+\n"):(percentage>=60 && percentage <70)?printf("B\n"):(percentage>=50 && percentage <60)?printf(" C+\n"):(percentage>=40 && percentage <50)?printf(" C\n"):(percentage>=30 && percentage <40)?printf(" D+\n"):(percentage>=20 && percentage <30)?printf(" D\n"):(percentage>=10 && percentage <20)?printf(" E+\n"):printf("E");
/*result */
(percentage>=50)?printf("\nResult is Pass "):printf("\n Result is Fail");










}
