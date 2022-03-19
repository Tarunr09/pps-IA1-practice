#include<stdio.h>
typedef struct complex
{
  float real;
  float imaginary;
}complex;

complex input()
{
  complex a;
  printf("Enter a real number:");
  scanf("%f",&a.real);
  printf("Enter a imaginary number:");
  scanf("%f",&a.imaginary);
  return a;
}
complex add(complex a, complex b)
{
  complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
void output(complex a, complex b, complex c){
  printf("The sum of 2 complex numbers (%f+i%f) + (%f+i%f): (%f+i%f)",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}

int main()
{
  complex a,b,c;
  a=input();
  b=input();
  c=add(a,b);
  output(a,b,c);
  return 0;
}