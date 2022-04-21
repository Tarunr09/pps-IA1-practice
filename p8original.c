#include<stdio.h>
typedef struct complex
{
float real,imaginary;
}Complex;

int input_count()
{
  int n;
  printf("enter the complex number\n");
  scanf("%d",&n);
  return n;
}

Complex input()
{
  Complex c;
  printf("enter the real and imaginary parts of complex 
  number\n");
  scanf("%f%f",&c.real,&c.imaginary);
  return c;
}

void input_n(int n,Complex c[n])
{
  for(int i=0;i<n;i++)
  c[i]=input();
}

Complex add(Complex a,Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}

Complex add_n(int n,Complex c[n])
{
Complex sum={0,0};
for(int i=0;i<n;i++)
sum=add(sum,c[i]);
return sum;
}

void output(int n,Complex c[n],Complex sum)
{
  for(int i=0;i<n-1;i++)
  printf("(%f+%fi)+\n",c[i].real,c[i].imaginary);
  printf("(%f+%fi)=\n",c[n-1].real,c[n-1].imaginary);
  printf("(%f+%fi)\n",sum.real,sum.imaginary);
}

int main()
{
  int n=input_count();
  Complex c[n];
  input_n(n,&c[n]);
  Complex sum=add_n(n,&c[n]);
  output(n,&c[n],sum);
  return 0;
}