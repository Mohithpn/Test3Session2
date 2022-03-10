g

#include <stdio.h>

int input()
{
  int n;
  printf("Enter the sequence of the number\n");
  scanf("%d",&n);
  return n;
}
int find_fibon(int n)
{
  int fibon=0;
  int a=0;
  int b=1;
  for(int i=0;i<n;i++) {
    fibon = a;
    a = b;
    b = fibon + b;
  }
  return fibon;
}


void output(int n, int fibon)
{
  printf("the %dth fibonacci number is %d\n", n, fibon);
}

int main()
{
  int n = input();
  int fibon = find_fibon(n);
  output(n, fibon);
  return 0;
}