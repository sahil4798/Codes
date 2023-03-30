#include<iostream>
using namespace std;
 
class shop{
    
    int id_no[100] ;
    int price[100];
    
    
    public:
    
    void setdata(int product_no );
    void displaydata(int product_no );

};

void shop :: setdata(int product_no){
 for(int i=0 ; i<product_no ; i++){
    cout<<"Enter the id_no of product no "<<i+1<<":"<<endl;
    cin>>id_no[i];
    cout<<"Enter the price of product no "<<i+1<<":"<<endl;
    cin>>price[i];
 }
}

void shop:: displaydata(int product_no){
    for(int i=0 ; i< product_no ; i++){
        cout<<"The product with id:"<<id_no[i]<<"is price :"<<price[i]<<endl;
    }
}
 
int main() {
 
 int n;
 shop dukan ;
 cout<<"Enter the number of product in dukan"<<endl;
 cin>>n;
 
 dukan.setdata(n);
 dukan.displaydata(n);
 


    return 0;
}