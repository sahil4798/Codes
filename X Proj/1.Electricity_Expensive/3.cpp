#include <iostream>
using namespace std;


class A {
    protected: 
    
    int total_number;
    int rating;
    int time;
    public:
     void setA (int x , int y, int z ){
        total_number = x ;
        rating = y;
        time =z;
    }
    void displayA(void){
        cout<<"The Total number of dublicate are "<<total_number<<endl;
         cout<<"The rating of dublicate are "<<rating<<endl;
          cout<<"The usage of dublicate are "<<rating<<endl;
    }
};

class B : public A {
    int rate , total;
    
    public:
    void setB (int x, int y, int z , int l) {
        setA(x , y , z);
        rate =l;
        // total = total_number*rating*time*rate;
    }
    float calc(void){ 
 
        return total = total_number*rating*time*rate;
    }
    void displayB(void){
        cout<<"The Total number of dublicate are "<<total_number<<endl;
         cout<<"The rating of dublicate are "<<rating<<endl;
          cout<<"The usage of dublicate are "<<time<<endl;
         cout<<"The rate  pre unit is "<<rate<<endl;
    }
};
int main() {
    
    int n ;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int N , R ,T  ;
    int r =10 ;
    
    B *ptr = new B[n] ;
    // A O[n];
    // A *ptr = &O[n];
    
    

    for(int i=0 ; i<n ; i++) {
        cout<<"Enter  total number"<<i+1 <<"of Dublicate items"<<endl;
        cin>>N;
        cout<<"Enter  rating of "<<i+1<<"Dublicate items"<<endl;
        cin>>R;
        cout<<"Enter  usage of "<<i+1<<"Dublicate items"<<endl;
        cin>>T;
        //  *ptr.setB(N , R , r);
        ptr->setB(N , R ,T , r);
        ptr->displayB();

        
        
        float t = 0 ;
        // int q;
        //  cout<< ptr->calc();
        
         t = t +  float(cout<<ptr->calc()) ;
        // t = t + q;
        
        
         ptr++;        
    }
    
    return 0;
}