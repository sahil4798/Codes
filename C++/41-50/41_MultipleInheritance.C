#include <iostream> 
using namespace std; 

class base1{
    protected:
    int num1 ;
    public:
    void setdata1(int a)
    {
        num1=a;
    }
};

class base2{
    protected:
    int num2 ;
    public:
    void setdata2(int a)
    {
        num2=a;
    }
};

class derived : public base1 , public base2 {
int num3 ;
public:
void func(void){
    cout<<"the value of num1 is :"<<num1<<endl;
    cout<<"the value of num2 is :"<<num2<<endl;
    cout<<"the value of num3 is :"<<num1+num2<<endl;
}
} ;

int main()
{ 
    
     derived d;
     d.setdata1(10);
     d.setdata2(25);
     d.func();


return 0;
}



/* Formatt of multiple inheritance
  
  class {D} : {visiblity of first class} {B1} , {visiblity of first class}{B2}  {
    class body
  };
*/