#include <stdio.h>

int input_number()
{
  int l;
  printf("Enter number: ");
  scanf("%d",&l);
  return l;
}

int is_composite(int n)
{
  int i;
  for(i=2;i<n/2;i++)
  {
    if(n%i==0)
    return 0;
    else
    return 1;
  }
}

void output(int n, int composite)
{  if(composite==0)
  printf(" not  composite");
  else
  printf("composite");
}

int main()
{
  int x,y;
  x=input_number();
  y=is_composite(x);
  output(x,y);
  return 0;
}
