#include<iostream>
using namespace std;

class overloading
{
   public:

   int Add(int a, int b)
   {
      cout<<"Addition of 2 integers\n";
      return a+b;
   }
   float Add(float a, float b)
   {
       cout<<"Addition of floats\n";
       return a+b;
   }
   double Add(double a, double b)
   {
      cout<<"Addition of doubles \n";
      return a+b;
   }
   int Add(int a, int b, int c)
   {
      cout<<"Addition of 3 integers\n";
      return a+b+c;
   }
   void fun (int a, float b)
   {}
   void fun(float x, int y)
   {}
};

 int main()
  {
     overloading obj;
     int i;
     float f;
     double d;
     
    i = obj.Add(11,21);
    cout<<i<<"\n";

    i=obj.Add(11,21,51);
    cout<<i<<"\n";

     f = obj.Add(10.9f,89.5f);
    cout<<f<<"\n";

    d= obj.Add(10.9,89.5);
    cout<<d<<"\n";


    return 0;
  
 }