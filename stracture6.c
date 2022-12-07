#include<stdio.h>

struct Demo1
{
    int A;
    struct B;
};

struct Hello
{
    int C;
    struct Demo dobj;
};

int main()
{
    struct Hello hobj;

    hobj.C = 11;
    hobj.D = 10.9;
    hobj.dobj.A = 21;
    hobj.dobj.B = 51;
}