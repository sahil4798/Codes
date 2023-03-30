#include <iostream> 
using namespace std; 

/*

CLASS TEMPLATE WITH MULTIPLE PARAMETERS(one , two or more than two)

template<class t1 , class t2 , so on ... >
class A{
  Body    
};
*/

template <class t1 , class t2>
class A{
    public:
    t1 a;
    t2 b;
    A(t1 x , t2 y){
        a=x;
        b=y;
    }
    void display(void){
        cout<<a<<" , "<<b<<endl;
    }
};

int main()
{ 
   A <int, int>ob1(2 , 4);
   ob1.display();
   A <float, int>ob2(8.71 , 4);
   ob2.display();
   A <float, float>ob3(2.23 , 4.45);
   ob3.display();
     

return 0;
}