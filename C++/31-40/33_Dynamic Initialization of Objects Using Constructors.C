#include <iostream>
using namespace std; 

class BankDeposit{
   int principal;
   int years;
   float intrest_rate;
   float return_value ;

   public:
   BankDeposit(void);
   BankDeposit(int p , int y , float r);
   BankDeposit(int p , int y , int r);
   void display(void); 
};

BankDeposit :: BankDeposit() {
}

BankDeposit:: BankDeposit(int p, int y , float r){
    principal =p ;
    years = y ;
    intrest_rate = r ;
    return_value=principal;
    for(int i=0 ; i<y  ; i++){
    return_value = return_value + return_value*intrest_rate ;
}
}

BankDeposit:: BankDeposit(int p, int y , int r){
    principal =p ;
    years = y ;
    intrest_rate = float(r)/100;
    return_value=principal;
    for(int i=0 ; i<y  ; i++){
    return_value = return_value + return_value*intrest_rate ;
}
}

void BankDeposit::  display(void){
      cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<return_value<<endl;
}



int main()
{  

    int p , y ;
    float r ;
    int R ;
    cout<<"Enter the value of Principle , years and intrest rate"<<endl;
    cin>>p>>y>>r;
     

    BankDeposit b1 , b2 , b3 ;
    b1 =  BankDeposit( p ,y ,r );
    b1.display();
   
    cout<<"Enter the value of Principle , years and intrest rate"<<endl;
    cin>>p>>y>>R;
    b2 =  BankDeposit( p ,y ,R );
    b2.display();

    b3 =  BankDeposit();
    b3.display();
    


     

return 0;
}