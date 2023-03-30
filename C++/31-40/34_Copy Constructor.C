#include <iostream> 

using namespace std; 

class number{
 
  int a;
  public :

  number(void){
   a=0;
  };

  number(int x){
    a=x;
  }
 // When no copy constructor is found, compiler supplies its own copy constructor
  number(number &O){
    cout<<"Coping Constructor being used"<<endl;
    a=O.a;
  }
  
  void display(void ){
    cout<<a<<endl;
  }


};


int main()
{ 

    number x, y ,z ;
    
    z  = number(3);
    z.display();
    x.display();
    y.display();

    number z1 , z2;
    z1 = number(z);  // Copy constructor  called
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    number z3 = z; // Copy constructor invoked
    z3.display();
  
    // z1 should exactly resemble z  or x or y



      

return 0;
}