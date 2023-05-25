#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *A, n, x, ch;
    int i, j;
    printf("Enter the dimension of array :");
    scanf("%d", &n);
    A = (int *)malloc(n*(n+1)/2 * sizeof(int));

    do
    {
        printf("Enter 1 for Create Lower Triangular Matrix \n");
        printf("Enter 2 for Get Lower Triangular Matrix\n");
        printf("Enter 3 for Set Lower Triangular Matrix \n");
        printf("Enter 4 for Display Lower Triangular Matrix \n");
        printf("Enter 5 for Exit \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:

            for (i = 1; i<= n; i++)
            {
                
                for(j=1 ; j<=n ; j++)
                {
                    // printf("Enter the element at [%d][%d] :  " , i , j );
                    // printf("Enter the element of matrix \n");
                    scanf("%d" , &A[i*(i+1)/2 +j-1] );
                }
            }
            break;

        case 2:
            printf("Enter the endices : ");
            scanf("%d%d", &i, &j);

            if (i >= j)
                printf("%d \n", A[i*(i+1)/2 +j-1]);
            else
                printf("0\n");
            break;

        case 3:
            printf("Enter the Endices and element : ");
            scanf("%d%d%d", &i, &j, &x);
            if (i >= j)
                A[i*(i+1)/2 +j-1] = x;
            break;

        case 4:
            for (i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (i >= j)
                        printf("%d ", A[i*(i+1)/2 +j-1]);
                    else
                        printf("0 ");
                }
                printf("\n");
            }
            break;

            // default:
            //     break;
        }
    } while (ch < 5);

    return 0;
}