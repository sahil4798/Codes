#include <iostream> 
using namespace std; 

class ShopItms{
    int itemId;
    float price ;
    public:
    void setData(int x , int y){
        itemId = x;
        price =y ;
    }
    void getData(void){
        cout<<"The id of item is : "<<itemId<<endl;
        cout<<"The price of item is : "<<price<<endl;
    }
};

int main()
{  
    int n ;
    cout<<"Enter the Number of you want in shop"<<endl;
    cin>>n;

    // int *ptr = &n;
    // int *ptr = new int[n];           // step by step evolution of pointer.
    // ShopItms *ptr = & n;
    // ShopItms *ptr = new ShopItms[n];



    ShopItms *ptr = new ShopItms[n];
    ShopItms *ptrTemp = ptr;
    
    int id ;
    float p;
    for(int i=0 ; i<n; i++){
        cout<<"Enter the Id and price of items no "<<i+1<<":"<<endl;
        cin>>id>>p;
        ptr->setData(id , p);
        ptr++ ;
    }
    
    for(int i=0 ; i<n; i++){
        ptrTemp->getData();
        ptrTemp++ ;
    }


     

return 0;
}