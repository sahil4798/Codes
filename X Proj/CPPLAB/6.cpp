#include <iostream>

using namespace std ;

class ThisPointer
{
    private:
    int a;
    public:
    ThisPointer(int a)
    {
        // a = a; //Throw Error
        this->a = a;
    }
    void Get()
    {
        cout<<"The value of a is "<<a;
    }
};
int main() {
    
    ThisPointer obj(4);
    obj.Get();
   
    return 0;
}