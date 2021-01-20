#include <stdio.h>
#include <string.h>

int main(void) {
  char fullnam[5][20];
  char tmp[20];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter fullname %d: ", i + 1);
        scanf("%[^\n]s", fullnam[i]);
        getchar();
    }

    for (int i = 0; i < 5; i++){
      printf("\n -%s-", fullnam[i]);
  }
  printf("\n");
  for (int i = 0; i < 5 - 1; i++){
      for (int j = i + 1; j < 5; j++){
          if (strcmp(fullnam[i], fullnam[j]) > 0)
          {
            strcpy(tmp, fullnam[i]);
            strcpy(fullnam[i], fullnam[j]);
            strcpy(fullnam[j], tmp);
          }
      }
  } 
     for (int i = 0; i < 5; i++){
      printf("\n Names ordered in alphabet: %s-", fullnam[i]);
  }
  return 0;
}