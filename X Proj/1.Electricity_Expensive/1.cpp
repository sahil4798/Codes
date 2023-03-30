#include <iostream> 
using namespace std; 

class maiin {
    protected:
    int numberOfItems;
    int powerOfItems;
    float noOfHours;
    
    public:
    void set_data(int x , int y, float z ){
        numberOfItems = x;
        powerOfItems =y ;
        noOfHours = z;
    }
    void display(void){
        cout<<"The number of Item is :"<<numberOfItems<<endl;
        cout<<"The power of Item is :"<<powerOfItems<<endl;
        cout<<"The Consption time of Item is :"<<noOfHours<<endl;
      }
    };

  class calculation : public maiin{
    
    int ratePerHour;
    
    // void calc( int x, int N){
    //  ratePerHour = x;
    // //  cout<<"The total power consption is "<<numberOfItems*powerOfItems*noOfHours*ratePerHour<<endl;
    //  float arr[N];
    //  for(int i=0 ; i<N , i++){
    //   arr[i] = numberOfItems*powerOfItems*noOfHours*ratePerHour ; 
    //  }
    // }
    public:
    void setrate(int x){
       ratePerHour = x;
       cout<<"The rate of per unit in Rs are :"<<ratePerHour<<endl;
    }

     float calc(void){
    //  cout<<ratePerHour<<endl;
     return numberOfItems*powerOfItems*noOfHours*ratePerHour ;

    }

    void calc2(void){
      cout<<numberOfItems*powerOfItems*noOfHours<<endl;
    }

  };


int main()
{ 
int N ;
cout<<"Enter the number of different type of applainces"<<endl;
cin>>N;
int n , p  ;
float t;
calculation obj[N];
for(int i=0 ; i<N ; i++){
  cout<<"Enter the total number of" << i+1 <<"dublicate applainces"<<endl;
  cin>>n;
  cout<<"Enter the power ratig of those dublicate applainces"<<endl;
  cin>>p;
  cout<<"Enter the total time in  hours of usage for those dublicate applainces"<<endl;
  cin>>t;
  obj[i].set_data( n , p ,t);
}

for(int i=0 ; i<N ; i++){
  
  obj[i].display();
}

 int r;
 cout<<"Enter the rate of one unit in rupees"<<endl;
 cin>>r;
//  obj[N].setrate(r);
    obj->setrate(r);


cout<<obj[0].calc()<<endl;
cout<<obj[1].calc()<<endl;
// obj[0].calc2();
obj[1].calc2();

int total_expense=0;

for(int i=0 ; i<N ; i++){
  obj[i].calc( );
  cout<<obj[i].calc( )<<endl;
  total_expense = total_expense + obj[i].calc();
}
  
// cout<<total_expense;   

return 0;
}