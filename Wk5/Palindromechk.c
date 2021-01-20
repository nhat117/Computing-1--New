#include <stdio.h>

int main(void) 
{
    char s[100];
    int start;
    int middle;
    int end;
    int length = 0;

  printf("Enter a string: ");
  scanf("%[^\n]s", s);

  while(s[length] != '\0'){
    length++;
  }
  end = length - 1;
  middle = length/2;

  for (start = 0; start < middle; start++){
    if (s[start] != s[end])
    {
       printf("%s is not a palidrome\n", s);
       break;
    }
    end--;
  }
  if(start == middle){
      printf("%s is a palidrome\n", s);
  }
  return 0;
}