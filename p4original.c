#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the value:");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
  int i;
  printf("Enter the elements of the array:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
}

int sum_n_arrays(int n, int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++){
  sum +=a[i];
  }
  return sum;
}

void output(int n,int sum)
{
  printf("The sum of %d value is %d",n,sum);
}

int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_n_arrays(n,a);
  output(n,sum);
  return 0;
}
