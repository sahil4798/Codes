#include <iostream> 
using namespace std; 

class base {
    private:
    int a;
    public:
    int b;
    protected:
    int c;
 
 public:
 void setvalue_a(int x){
   a=x;
 }
  
};

class derived : public base {

public:

    setvalue_a();
    void setvalue_b(int y){
      b=y;
    }
    


};

class derived2 : private base {

public:
void inherit_private2(int x)
{
    setvalue_a(x);
}
void setvalue_b2(int y){
      b=y;
    }

};

class derived3 : protected base {

public:
void inherit_private3(int x)
{
    setvalue_a(x);
}
void setvalue_b3(int y){
      b=y;
    }

};

int main()
{ 
 
derived d1 ;


derived2 d2 ;
d2.inherit_private2(2);


     

return 0;
}