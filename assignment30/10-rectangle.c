
        #include<stdio.h>
        int main()
        /*finding area and perimeter of rectangle*/

        {
float l,b,area=0,peri=0;

printf("enter length:\n");
scanf("%f",&l);
printf("enter breadth:\n");
scanf("%f",&b);

area=l*b;
peri=2*(l+b);


printf("The area is %f",area);

printf("\nthe perimeter is %f",peri);

return 0;



        }
