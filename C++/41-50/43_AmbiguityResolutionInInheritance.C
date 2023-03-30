#include <iostream> 
using namespace std; 

class base1 {
    int n;
    public:
    void greet(void){
        cout<<"good morning"<<endl;
    }
}; 
class base2 {
    int m;
    public:
    void greet(void){
        cout<<"subh prabhhat"<<endl;
    }
}; 

class derived : public base1 , public base2{
    int t;
    public:
    void triger(void){
       base1:: greet();
       base2::greet();
    }
};


// code for demostration of ambiguity number-2
class B{
    public:
    void say(void){
        cout<<"Base Class"<<endl;
    }
};
class D : public B{
    public:
    void say(void){
        cout<<"Derived Class"<<endl;
    }
};
class D2 : public B {
    
};


int main()
{ 
    // // ambiguity -1
    // base1 o1;
    // o1.greet();
    // base2 o2 ;
    // o2.greet();  
    //  derived d ;
    //  d.triger();
   
    //Ambiguity-2
    B b;
    b.say();

    D d ;
    d.say();  
 
    D2 d2 ;
    d2.say();  
 
return 0;
}