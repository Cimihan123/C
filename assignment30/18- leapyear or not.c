#include<stdio.h>
int main()

{
int y;
printf("enter a year:\n ");
scanf("%d",&y);


/*Most years that can be divided evenlyby 4 are leap years*/

if (y%4==0){

    if (y%100==0)
    {

        if (y%4==0)

        printf("year is leap");
        else
            printf("year is not leap");
    }
else

printf("year a leap");

}

else

 printf("year is not leap");
}


