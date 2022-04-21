#include<stdio.h>
void input (int *a,int *b)
{
 printf("Enter 2 values\n");
 scanf("%d %d",a,b);
}

void add(int a,int b,int *sum)
{
 *sum=a+b;  
}

void output (int sum)
{ 
 printf("sum is %d",sum);
}

int main()
{
 int a,b,sum;
 input (&a,&b);
 add(a,b,&sum );
 output (sum);
 return 0;
} 