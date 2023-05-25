#include <stdio.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

int RBinarySearchR(struct Array ob, int l, int h, int key)         //Recursive Binary Search.
{

    int mid;

    if (l <= h)
    {
        mid = (l + h) / 2;

        if (ob.A[mid] == key)
        {
            return mid;
        }

        else
        {
            if (ob.A[mid] > key)
            {

                return BinarySearch(ob, l, h = mid - 1, key);
            }
            else
            {

                return BinarySearch(ob, mid + 1, h, key);
            }
        }
    }
    return -1;
}

int  BinarySearch(struct Array ob , int key)
{
    int l, h, mid;
    l = 0;
    h = ob.length - 1;

    while (l <= h)
    {
        mid = (l + h)/2;
        if (ob.A[mid] == key)
        {
            return mid;
        }

        else if (ob.A[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{

    struct Array A = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10, 10};

    printf("%d", BinarySearch(A,  9));

    return 0;
}

