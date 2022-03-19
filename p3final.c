#include<stdio.h>
int input()
{
  int n;
  printf("Enter value: \n");
  scanf("%d",&n);
  return n;
}

int add(int n)
{
  int sum=0;
  for(int i=1;i<=n;i++)
  {
   sum=sum+i;
  }
  return sum;
}

void output(int n,int sum)
{
  printf("sum of %d numbers is: %d",n,sum);
}

int main()
{
  int n,sum;
  n=input();
  sum=add(n);
  output(n,sum);
  return 0;

}