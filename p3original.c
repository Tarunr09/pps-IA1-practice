#include<stdio.h>
int input()
{
  int n;
  printf("Enter value:");
  scanf("%d",&n);
  return n;

}
int sum_n(int n)
{
  int sum=0;
  for (int i=0;i<=n;i++)
  {
   sum=sum+i;
  }  return sum;
}
void output(int n, int sum)
{
  printf("The sum of %d numbers is %d \n",n,sum);
}

int main()
{
  int n,sum;
  n=input();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}
