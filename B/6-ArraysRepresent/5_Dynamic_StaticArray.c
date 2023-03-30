#include <iostream> 
#include <stdlib.h> 
using namespace std; 



int main()
{   

    // Static Array
    int  arr[] = {1, 2, 3, 4, 5};
    
    //Declaration of Dynamic Array
    int *ptr;
    ptr = (int *)malloc(6*sizeof(int));  

    ptr[0]=9;
    ptr[1]=8;
    ptr[2]=7;
    ptr[3]=6;
    ptr[4]=5;
    ptr[5]=4;
    
    for(int i=0 ; i<5 ; i++)
    {
        printf(" %d " , arr[i]);
    }
  
    printf("\n");

    for(int i=0 ; i<6 ; i++)
    {
        printf(" %d " , ptr[i]);
    }


return 0;
}