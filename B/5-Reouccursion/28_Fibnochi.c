#include <stdio.h>

int arr[20];

int fib(int n) // Memorisation
{
    if (n <= 1)
    {
        return n;
        arr[n] = n;
    }
    else
    {
        if (arr[n - 2] == -1)
        {
            arr[n - 2] = fib(n - 2);
        }

        if (arr[n - 1] == -1)
        {
            arr[n - 1] = fib(n - 1);
        }
        arr[n] =arr[n - 2] + arr[n - 1];
    }
    return arr[n - 2] + arr[n - 1];
}
 
int main()
{

    for (int i = 0; i < 20; i++)
    {
        arr[i] = -1;
    }

    int N = 5;
    printf(" %d ", fib(N));

    return 0;
}

// YA HE AAM ZINDGI
//  #include<stdio.h>

// int fib(int n)
// {
//    if(n<=1)
//    {
//     return n;
//    }
//    else
//    {
//     return fib(n-2) + fib(n-1);
//    }
// }

// int main(){

//  int N=2;
//  printf("%d \n " , fib(N));

// return 0;
// }