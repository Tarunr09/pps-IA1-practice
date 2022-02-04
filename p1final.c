#include<stdio.h>
void input(int *a, int *b)
{
  printf("Enter a value:");
  scanf("%d%d",a,b);
}
void add(int a, int b, int *sum)
{
  *sum=(a+b);
}
void output(int sum)
{
  printf("Sum of 2 numbers is %d",sum);
}
int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(sum);
  return 0;
}