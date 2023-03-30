#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *A, n, x, ch;
    int i , j;
    printf("Enter the dimension of array :");
    scanf("%d", &n);
    A = (int *)malloc(n * sizeof(int));
 
    do
    {
        printf("Enter 1 for Create Diagonal Matrix \n");
        printf("Enter 2 for Get Diagonal Matrix\n");
        printf("Enter 3 for Set Diagonal Matrix \n");
        printf("Enter 4 for Display Diagonal Matrix \n");
        printf("Enter 5 for Exit \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            for ( i = 1; i <= n; i++)
            {
                printf("Enetr the element at i=j=%d :", i);
                scanf("%d", &A[i - 1]);
            }
            break;

        case 2:
            printf("Enter the endices : ");
            scanf("%d%d" , &i , &j);
            
            if(i==j)
            printf("%d \n" , A[i-1]);
            else printf("0\n"); 
            break;
        
        case 3:
        printf("Enter the Endices and element : ");
        scanf("%d%d%d" , &i , &j , &x);
        if(i==j)
        A[i-1] = x;
        break;

        case 4:
        for(i=1 ; i<=n ; i++)
        {
            for(int j=1 ; j<=n ; j++)
            {   
                if(i==j)
                printf("%d ", A[i-1]);
                else
                printf("0 ");
            }
            printf("\n");
        }
        break;

        // default:
        //     break;

        }
    }
    while(ch<5);
    
    
    

    return 0;
}