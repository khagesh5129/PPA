#include<stdio.h>
#pragma pack (1)
struct Demo
{
    int i;
    char ch1;
    float f;
    char ch;
    float d;
};

int main()
{
    struct Demo dobj;

    printf("size of the stracture is : %d\n",sizeof(dobj));

    return 0;
}