#include <stdio.h>

void search_delete(int n, int arr[50], int element)
{
    int index;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == element)
        {
            printf("The index of %d  is %d\n", element, i);
            printf("The Position of %d is %d\n", element, i + 1);
            index = i;
            printf("%d \n ", index);
            break;
        }
        if (i == n)
        {
            printf("element is not exist in array");
        }
    }

    for (int i = index; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int n, element;
    int arr[50];

    printf("Enter the capacity of array \n");
    scanf("%d", &n);

    printf("Enter the Elements of array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element which is requird to find and delete \n");
    scanf("%d", &element);

    search_delete(n, arr, element);

    for (int i = 0; i < n - 1; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}
