#include <stdio.h>
void input_string(char *a)
{
  printf("Enter the string: ");
  scanf("%s", a);
}

int str_reverse(char *str, char *rev_str)
{
  int n,m;
  for (n = 0; a[n]='\0'; n++)
  {
    m+=1;
  }
  return m;
}

void output(int m)
{
  printf("The reverse of string is:\n", a, reverse_a);
  for (int i = 0; a[i]='\0'; i--)
  {
    printf("%c",a[i]);
  }

}

int main()
{
  char str[10];
  input_string(str);
  char rev_str[10];
  m=str_reverse(str, rev_str);
  output(m);
  return 0;
}