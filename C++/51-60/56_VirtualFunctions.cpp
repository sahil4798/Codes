#include <iostream> 
using namespace std; 

    class base{
    public :
    int var_base ;
    
    virtual  void setdata(int x){
        var_base= x;
    }

    virtual void display(void){
        cout<<"By the base class, The value of varbase is :"<<var_base<<endl;
    };

};

class derived : public base{
    public :
    int var_derived ;
    
    void setdata(int x){
        var_derived= x;
    }

    void display(void){
        cout<<"By the derived class, The value of varbase is :"<<var_base<<endl;
        cout<<"By the derived class, The value of varderived is :"<<var_derived<<endl;
    };

};

int main()
{ 

     base *base_class_pointer;
     base base_class_object;
     derived derived_class_object;
     
     base_class_pointer = & derived_class_object;
     base_class_pointer->setdata(2);
     base_class_pointer->display();

    //  base_class_pointer = & base_class_object;
    //  base_class_pointer->setdata(2);
    //  base_class_pointer->display();


return 0;
}