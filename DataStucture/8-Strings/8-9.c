#include <stdio.h>
#include <stdlib.h>

int main()
{

    // printf("*************************8-(1)********************************\n")
    //     printf("*************************8-(2)********************************\n") 
    // char A[] = "finding";
    // int H[26] = {};

    // for (int i = 0; A[i] != '\0'; i++)
    // {

    //     H[A[i] - 97] += 1;
    // }

    // for (int i = 0; i < 16; i++)
    // {
    //     if (H[i] > 1)
    //     {
    //         // printf("The number of repeation are %d " , H[i]);
    //         // printf("and repeated character is %c" , i+97 );
    //         printf("The number of repeation are %d and repeated character is %c \n ", H[i], i + 97);
    //     }
    // }
    printf("*************************9-(3)Bit Methord********************************\n") ;
    char B[] = "finding";
     int H = 0, X = 0;

    for (int i = 0; B[i] != '\0' ; i++)
    {
        X = 1;
        X = X<<(B[i]-97);
        if ( (X&H) > 0)
        {
            printf("%c is a dublicate \n ", B[i]);
        }
        else
        {
             H = H | X;
            
        }
    }

            // printf("is a dublicate \n ");
    return 0;
}