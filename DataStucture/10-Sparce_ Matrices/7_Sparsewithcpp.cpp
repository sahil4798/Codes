#include <iostream> 
using namespace std; 

class Element
{   
    public:
    int i ;
    int j;
    int x;
};
class Sparse
{
    private:
    int m ;
    int n;
    int num;
    Element * e;
    public:
    // Sparse()
    // {
    //     m =4;
    //     n=4;
    //     num = 4;
    //     e = new Element(num*sizeof(Element));
    // }
    Sparse(int m , int n , int num)
    {
        this->m=m;
        this->n=n;
        this->num=num;
        e = new Element[this->num];
    }
    ~Sparse()
    {
        delete [] e; 
    }

    void Read()
    {
        cout<<"Enter the non zero element"<<endl;
        for(int i=0 ; i<num ; i++)
        {
            cin>>e[i].i>>e[i].j>>e[i].x;
        }
    }

    void Display()
    {   
        int i , j ,k ;
        k=0;
        for(i=0 ; i<m ; i++ )
        {
            for(j=0 ; j<n ; j++)
            {
                if(i == e[k].i && j == e[k].j )
                 cout<<e[k++].x<<" ";
                 else
                 cout<<0<<" ";
            }
            cout<<endl;
        }
    }


};

int main()
{ 

     Sparse s(4 , 4 , 4);
     s.Read();
     s.Display();
     

return 0;
}