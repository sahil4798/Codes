#include <stdio.h>
#define SIZE 10

int Hash(int x)
{
    return x % SIZE;
}

int Probing(int H[], int x)
{
    int t = Hash(x);
    int i = 0;
    while ((t + i) % SIZE != 0)
    {
        i++;
    }
    return (Hash(x) + i) % SIZE;
}

void Hashing(int A[], int n, int H[])
{
    int i;

    for (i = 0; i < n; i++)
    {

        if (H[Hash(A[i])] == 0)
            H[Hash(A[i])] = A[i];
        else
            H[Probing(H, A[i])] = A[i];
    }
 

    
}

void insert(int H[] , int key)
{
    if(H[Hash(key)] ==0 )
       H[Hash(key)] = key;

     else
     H[Probing(H , key)] =key ; 
    
}

int main()
{

    int H[SIZE] = {0};

    // int A[] = {1, 4, 6, 10, 9, 7};
    // Hashing(A, 6, H);
    
    insert(H , 8);
    insert(H , 6);
    insert(H , 1);
    insert(H , 9);

    for (int i = 0; i < SIZE; i++)
        printf(" %d ", H[i]);

    return 0;
}