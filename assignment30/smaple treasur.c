

#include <stdio.h>
#include<stdlib.h>
int main()
{

    int n1,n2,n3,n4,count,count1;


    n3=rand()%10+1;
    n4=rand()%10+1;


    printf("This is for the first treasure if you find it correctly then you will be get chance to find second treasure\n\n");


    printf("\nYou have 3 attempts for first treasure\n");
 printf("Guess a number:\n");

count=0;

count1=0;
      while (count!=3 && n1>=n3 || n3 >=n1){

               scanf("%d",&n1);
count++;


        if (n3<n1 && count==1  )   {printf("\n<<1>>This is wrong. Guess less than that.\t\t%d attempts remaining.\n ",3-count);}
            else if  (n1>n3 && count==2 ){printf("\n<<1>>This is wrong. Guess less than that.\t\t%d attempts remaining.\n",3-count);}
        else if  (n1<n3 && count==1){printf("\n<<1>>This is wrong. Guess more than that.\t\t%d attempts remaining.\n",3-count);}
    else if  (n1<n3 && count==2 ){printf("\n<<1>>This is wrong. Guess more than that.\t\t%d attempts remaining.\n",3-count);}


      else if  (count==3 && n3!=n1){
                printf("\nGame over!! Attempts left=%d",3-count);

              break;}




         else {    printf("Congrats!!You have guessed one treasure.The attempt you took is %d.\n\nRemember again you have got 3 attempts for second treasure. \nGuess a number for another treasure\n",count); while (count1!=3 &&n2>=n4 || n4 >=n2 ){
  scanf("%d",&n2);
  count1++;
        if (n4<n2 && count1==1  )   {printf("\n<<2>>This is wrong. Guess less than that.\t\t%d attempts remaining.\n  ",3-count1);}
            else if  (n2>n4 && count1==2 ){printf("\n<<2>>This is wrong. Guess less than that.\t\t%d attempts remaining.\n ",3-count1);}
        else if  (n2<n4 && count1==1){printf("\n<<2>>This is wrong. Guess more than that.\t\t%d attempts remaining.\n ",3-count1);}
    else if  (n2<n4 && count1==2 ){printf("\n<<2>>This is wrong. Guess more than that.\t\t%d attempts remaining.\n ",3-count1);}


      else if  (count1==3 && n4!=n2){
                printf("Game over!!.Attempts left=%d",3-count1);

              break;}


         else{printf("Congrats!!You have found both treasure: The attempt you took is %d",count1);
         break;}

              }


break;



}



         }















         }





















