#include <iostream> 
using namespace std; 

template<class T>
void swaping(T &x , T &y){
    T temp;
    temp=x;
    x=y;
    y=temp;
 
}

template<class T1 , class T2>
float avg( T1 x , T2 y){
   
   return  ((float)(x+y)/2);   
//    return  (x+y)/2.0;   
}

float avg1( int x , float y){

//    return  ((float)(x+y)/2);   
   return  (x+y)/2;   
}

int main()
{ 


// cout<<"The avg of 2 and 5 is :"<<avg(2,9)<<endl;
// cout<<"The avg of 2 and 9.2 is :"<<avg1(2,9.2)<<endl;

cout<<"The avg of 2 and 5 is :"<<avg(2,9.2)<<endl;

int a=10 , b=100;
swaping( a , b );
cout<<a<<endl<<b;

return 0;
}