#include <iostream> 
using namespace std; 

class base{
    public :
    int var_base ;
    
    void setdata(int x){
        var_base= x;
    }

    void display(void){
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
    base base_class_obj;
    derived derived_class_obj;
   

    base * base_class_ptr;
    base_class_ptr = &derived_class_obj ;
    // base_class_ptr = &base_class_obj ;
    base_class_ptr->setdata(40);
    // base_class_ptr->var_base=40;
    // base_class_ptr->var_derived=40;  //Will Throw error.
    base_class_ptr->display();



    derived * derived_class_ptr;
    // derived_class_ptr = &base_class_obj;  //Why this is throwing error?????????????????
    derived_class_ptr = &derived_class_obj;
    derived_class_ptr->setdata(30);
    // derived_class_ptr-> var_derived =30 ;
    derived_class_ptr->display();

     

return 0;
}