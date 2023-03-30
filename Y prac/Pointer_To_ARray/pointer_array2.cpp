#include <iostream>

using namespace std;

int main()
{

    int arr[3];
    // int *ptrp = &arr[3] Invalid
    int *ptrp = arr; //Valid
    

    // pointer ptr pointing to a dynamic size array in heap.
    int *ptr = new int[3];

    *ptr = 1;
    cout << "The value of a is : " << *ptr << endl;
    ++*ptr = 2;
    cout << "The value of a is : " << *ptr << endl;

    

    return 0;
}