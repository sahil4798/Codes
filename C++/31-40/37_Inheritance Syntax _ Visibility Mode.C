#include <iostream> 
using namespace std; 

class employee{
  
  
  public:
  int id ;
  int salary;


  employee(int x){
    id=x;
    salary=50000000;
  }
  employee(){}
  
  };

// Deried Class syntax
/*
class {{derieved-class-name}} : {{visiblity-mode}} {{base-name}}
{
    class member/methords/etc...
}
Notes 
1- default visibility  Mode is private
2- public visiblity Mode : Public members of  base class becomes public members of derived class.
3- pricate visiblity Mode : Public members of  base class becomes private members of derived class.
4- Pirvate member are never inhertrd  
*/

//Creating a employee base  class from a employee base class

class programmer :  employee{
public:
int language ;
programmer(int y){
    id = y ; 
    language_code = 9;
} 

getdata(){
    cout<<id<<endl;
}
};


int main()
{ 

employee harry(1) , rohan(2);
cout<<harry.salary<<endl;
cout<<rohan.salary<<endl;

programmer harr(2001) , roha(2002) ;
cout<<harr.language_code<<endl;
harr.getdata();
roha.getdata();


     

return 0;
}