#include <stdio.h>

int main(void) 
{
    char s[100];
    char r[100];
    int start;
    int end;
    int count = 0;

  printf("Enter a string: ");
  scanf("%[^\n]s", s);

  while (s[count] != '\0')
  {
      count++;
  }
  end = count - 1;

  for(start = 0; start < count; start++){
      r[start] = s[end];
      end--;
  }
  r[start] = '\0';

  printf("reverse string: %s \n", r);
  return 0;
}