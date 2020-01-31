    #include<stdio.h>
    int main()

    {


       /*to check armstrong's number*/

       int n,r,sum=0,a,no,count=0,temp;

       printf("write a number \n");
       scanf("%d",&n);



    no=n;

    /*using while loop to count */
    while(no!=0)
    {
       count++;
        no=no/10;




    }

    printf("\nthe length is %d\n",count);
    no=n;
    while(no!=0){

        r=no%10;
        sum=sum*10+r;
        no=no/10;





    }

    if (sum==n)
        printf("result is arm %d",sum);
        else
        printf("result is not arm %d",sum);

        return 0;





    }
