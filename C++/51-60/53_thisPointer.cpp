#include <iostream> 
using namespace std; 

class cell{
    int a;
 
    public:
    void setdata(int a){
    // cell & setdata(int a){
      this->a=a;
    //   return *this ;
    }

    void display(void){
        cout<<"The value of a is :"<<a<<endl;
    }
};


int main()
{   
    // ‘this’ Pointer in C++
    // “this” is a keyword that is an implicit pointer. “this” pointer points to the object which calls the member function. An example program is shown below to demonstrate the concept of “this” pointer.
     
    cell c;
    // c.setdata(5).display() ;
    c.setdata(5);
    c.display();

     

return 0;
}