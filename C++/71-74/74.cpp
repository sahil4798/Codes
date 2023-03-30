#include <iostream> 
#include <functional> 
#include <algorithm> 
using namespace std; 
void display(int arr[] )
{
    for(int i=0 ; i<8 ; i++)               //i<sizeof(arr)
    { 
        cout<<arr[i]<<endl;
    }
}

int main()
{ 
   // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
   int arr[] = { 8 , 6 , 9 ,4 , 2 , 3 ,1 ,0};
   cout<<"*********************************Sorting 5 ****************************************"<<endl;
   sort(arr , arr+5);
   display(arr);
   cout<<"*********************************Sorting 8 ****************************************"<<endl;
   sort(arr , arr+8);
   display(arr);
   
   cout<<"*****************************Sorting 8 in decreasing order *************************************"<<endl;
   sort( arr, arr+6, greater< int >( ));
   display(arr);  

return 0;
}