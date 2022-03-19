#include<stdio.h>
int input()
{
 int x;
 printf("enter the value :");
 scanf("%d",&x);
 return x;
}

int cmp(int a,int b,int c)
{
 if(a>=b && a>=c)
 return a;

 else if (b>=a && b>=c)
 return b;

 else if (c>=a && c>=b)
 return c;

}

void output(int big)
{
  printf("The biggest number is %d \n",big);
}

int main()
{
  int a,b,c,big;
  a=input();
  b=input();
  c=input();
  big=cmp(a,b,c);
  output(big);
  return 0;
}