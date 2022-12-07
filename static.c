#include<stdio.h>

void Demo()
{
    auto int A = 10;
    A++;   //increment the value by 1
    printf("value from Demo is : %d\n",A);

}
void Hello()
{
    static int B = 10;
    B++;
    printf("value from hello is : %d\n",B);

}

int main()
{

    Demo();
    Demo();
    Demo();

    Hello();
    Hello();
    Hello();


    return 0;
}