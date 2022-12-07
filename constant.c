#include<stdio.h>
int main()
 {
     int no1 = 10;
     const int no2 =10;

     printf("%d\n",no1);
     printf("%d\n",no2);

    printf("%d\n",no1++);
    printf("%d\n",no1 = 20);
    printf("%d\n",no1--);



     no1++;
     no1 = 20;
     no1 = 20;    


     return 0;
 }