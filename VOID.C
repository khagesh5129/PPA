#include<stdio.h>

int main()
{ 
  char ch = 'A';
  int i = 11;
  float f =9.09;
  double d = 89.9078;

  char *cp = &ch;
  int *op = &i;
  float *fp = &f;
  double *dp = &d;

  void *vp = &ch;

  printf("Value of ch : %c\n",ch);
  printf("address of ch : %p\n",&ch);
  printf("VAlue inside cp : %p\n",cp);
  printf("Data refer by cp : %d\n",*cp);
  printf("size of ch : %d\n", sizeof (ch));
  printf("size of cp : %d\n",sizeof (cp));

  printf("refer of by vp : %d\n",*(char *)vp);
  vp = &i;

  printf("data refer by vo : %d\n",*(int *)vp);


    return 0;
}