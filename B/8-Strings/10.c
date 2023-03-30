#include <stdio.h>
#include <stdlib.h>

void perm(char A[] )
{
      
}

int main()
{

      char A[] = "decimal";
      char B[] = "medical";

      int H[26] = {};
      int j;
      for (int i = 0; A[i] != '\0'; i++)
      {
            H[A[i] - 97] += 1;
      }
      for (j = 0; B[j] != '\0'; j++)
      {
            H[B[j] - 97] -= 1;
            if (H[B[j] - 97] < 0)
            {
                  printf("A and B are not anagram \n");
                  break;
            }
      }
      if (B[j]=='\0')
      {
            printf("A and B are  anagram \n");
      }

      
      char C[] = "ABC";
      



















      return 0;
}
