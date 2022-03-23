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
  for(int i=2;i<n/2;i++)
  {
    if(n%i==0)
    return 0;
    else 
    return 1;
  }
}

void output(int n , int is_composite)
{
  if(is_composite==0)
  printf ("%d is a composite number", n);
  else
  printf ("%d is not a composite number",n);
}
int main()
{
  int x,y;
  x=input_number();
  y=is_composite(x);
  output(x,y);
  return 0;
}
