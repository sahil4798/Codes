#include <iostream> 
using namespace std; 

class vector{

public:
int n ;
int *arr;

vector(int x ){
    n= x;
    arr = new int[n];
}

int dotproduct(vector  &o){
    int d =0 ;
    
    for(int i=0 ; i<n ; i++){
      d+= this->arr[i]*o.arr[i];
    }
    return d;

}

};

int main()
{ 

vector ob1(3);
ob1.arr[0] = 1;
ob1.arr[1] = 3;
ob1.arr[2] = 4;

vector ob2(3);
ob2.arr[0] = 6;
ob2.arr[1] = 8;
ob2.arr[2] = 10;

int p = ob1.dotproduct(ob2);
cout<<p;


     

return 0;
}