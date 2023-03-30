#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;
    cout << "The value of ptr : " << *ptr << endl;
    ptr++;
    cout << "The value of ptr++ : " << *ptr << endl;
    ptr--;
    cout << "The value of ptr-- : " << *ptr << endl;
    ptr += 2;
    cout << "The value of ptr+=2 : " << *ptr << endl;

    int arr[3];
    // int *ptr = &arr[];  //Invalid
    int *ptr = arr;
    arr[0] = 1;
    ptr[1] = 2;
    cout << "The value of arr[0] is :" << arr[0] << endl;
    cout << "The value of arr[0] is :" << *ptr << endl;
    cout << "The value of arr[1] is :" << ++*ptr << endl;

    int *B;
    int C[] = {1, 2, 3, 4, 5};
    B = C;
    // printf("%d \n" , *B);
    // printf("%d \n" , *B++);
    // printf("%d \n" , *B);

    printf("%d\n ", B[0]);
    printf("%d\n ", B[1]);

    return 0;
}