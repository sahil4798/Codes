#include <stdio.h>
#include <stdlib.h>

// // char *ptr  reverse(char *A)
// void reverse(char *A)
// {
//   int i;
//   for(i=0 ; A[i]!='\0' ; i++)
//   {}
//   i=i-1;
//   char *R ;
//   R= (char*)malloc(10*sizeof(char));
//   for(int j=0 ; i<j ; i-- , j++)
//   {
//      R[j]=A[i];
//   }
//   for(int j=0 ; R[j]!='\0' ; j++)
//   {
//     printf("%c" , R[j]);
//   }
// //   return R;
// }

int main()
{
    char A[] = "Python";

    printf("********************************6-REVERSE BY Other string******************************************\n");
    char R[7];
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
    }
    i = i - 1;
    int j;
    for (j = 0; i >= 0; i--, j++)
    {
        R[j] = A[i];
    }
    R[j] = '\0';
    printf("%s \n", R);

    printf("********************************6-REVERSE BY SWAP******************************************\n");
    int m, n;
    for (n = 0; A[n] != '\0'; n++)
    {
    }
    n = n - 1;

    for (m = 0; m < n; m++, n--)
    {
        int temp = A[m];
        A[m] = A[n];
        A[n] = temp;
    }
    printf("%s\n", A);

    // char C[] = {'A' , 'u' ,'k' ,'i' ,'g' , 'i'};
    // reverse(C);

    printf("********************************7-COMPARING******************************************\n");
    char E[] = "painter";
    char F[] = "painting";

    int p, q;
    for (p = 0, q = 0; E[p] != '\0' || F[q] != '\0'; p++, q++)
    {
        if (E[p] != F[q])
        {
            printf("Both strings are diffrent\n");
            break;
        }
    }
    if (E[p] == F[q])
        printf("Both strings are equal\n");
    else if (E[p] < F[q])
        printf("string E is less then F\n");
    else
        printf("string E is greator then F\n");

    printf("********************************7-Palindrome******************************************\n");
    char K[] = "NamaN";
    char L[6];
    int i1, j1;
    for (i1 = 0; K[i1] != '\0'; i1++)
    {
    }
    i1 = i1 - 1;

    for (j1 = 0; i1 >= 0; j1++, i1--)
    {
        L[j1] = K[i1];
    }
    L[j1] = '\0';

    for (i = 0, j = 0; K[i] != '\0' || L[j] != '\0'; i++, j++)
    {
        if (K[i] != L[j])
        {
            printf("K and L are not Palindrome \n");
            break;
        }
        else
        {
            printf("K and L are palindrome \n");
            break;
        }
    }
     

      printf("***********************7-Palindrome(Another methord)*******************************\n");
    for (j = 0; K[j] != '\0'; j++)
    {
    }
    j = j - 1;

    for (i = 0; i < j; i++, j--)
    {
        if (K[i] != L[j])
        {
            printf("K and L are not palindrome \n");
        }
        else
        {
            printf("K and L are palindrome \n");
            break;
        }
    }


return 0;
}