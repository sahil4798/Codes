#include <iostream> 
using namespace std; 

template<class T1= int , class T2 = float , class T3 = char>

class A {
    T1 a; 
    T2 b;
    T3 c;
public :
A(T1 x , T2 y , T3 z){
a=x;
b=y;
c=z;
}
void display(void){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
}
};


int main()
{ 

A<> ob1(4  ,6.4 , 't');
ob1.display();

A<char , int , float> ob2('f'  ,14 , 6.9);
ob2.display();
     

return 0;
}