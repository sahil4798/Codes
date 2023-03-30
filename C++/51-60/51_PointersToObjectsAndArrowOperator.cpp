#include <iostream> 
using namespace std; 


class complex{
    int real ;
    int imaginery ;
    public :
    
    void  setdata(int x , int y){
        real = x;
        imaginery= y;
    }
    
    void getdata(void){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginery part is "<<imaginery<<endl;
    }
    

};


int main()
{ 

//  complex c;
//  complex *ptr = &c;

complex *ptr = new complex;


//  (*ptr).setdata(3,7); //below line mean same as side line
  ptr->setdata(3 ,7);

//  (*ptr).getdata();  //below line mean same as side line
   ptr->getdata();


   //Array of Objects
   complex *ptr1 = new complex[4];
   ptr1->setdata(0 ,0);
   ptr1->getdata();



//    ptr1[1]->setdata(1 ,1);
//    ptr1[2]->getdata();

//    ptr1++;
//    ptr->setdata(1 ,1);   //quesion : Is this code is same above two line. 
//    ptr->getdata();
     

return 0;
}