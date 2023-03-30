#include <iostream> 
using namespace std; 

 // syntax of tempalte of STL 
 
 template <class T>
 class A{
  T a ;
  public :
  A(T x){
    a=x;
  }
  void display(void ){
    cout<<a<<endl;
  }

 };

int main()
{ 

    A<int> ob(3);
    ob.display();

    A<float> ob1(2.5);
    ob1.display();
   

return 0;
}