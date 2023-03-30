#include<iostream>
using namespace std;

class Base{
    protected:
        int a; 
    private:
        int b;

};

class Derived: protected Base{
   
};
 
/*                               ------------------------Visiblity typr--------------------                      
(Data member and function       Public Derivation             Private Derivation             Protected Derivation
in Base class )
Private members                  not inherited                   not inherited                  not inherited

Protected members                 protected                        private                        protected

Public members                     public                          private                        prtected

*/


int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}
