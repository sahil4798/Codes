#include <iostream> 
using namespace std; 

template <class t>
class vector{

public:
int n ;
t *arr;

vector(int x ){
    n= x;
    arr = new t[n];
}

t dotproduct(vector & o){
    t d =0 ;
    
    for(int i=0 ; i<n ; i++){
      d+= this->arr[i]*o.arr[i];
    }
    return d;

}

};

int main()
{ 

vector <float>ob1(3);
ob1.arr[0] = 0.1;
ob1.arr[1] = 0.1;
ob1.arr[2] = 0.1;

vector <float>ob2(3);
ob2.arr[0] = 0.6;
ob2.arr[1] = 0.8;
ob2.arr[2] = 0.9;

float p = ob1.dotproduct(ob2);
cout<<p;


     

return 0;
}

