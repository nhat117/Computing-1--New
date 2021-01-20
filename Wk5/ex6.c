#include <stdio.h>

int main(void) 
{
    char fullnam[5][20];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter fullname %d: ", i + 1);
        scanf("%[^\n]s", fullnam[i]);
        getchar();
    }
  
  for (int i = 0; i < 5; i++){
      printf("-%s-", fullnam[i]);
  }
  return 0;
}