// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions




#include <iostream>
#include <string>
using namespace std;

class checkstring
{
private:
    string s;
    void chk(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void checkstring ::read(void)
{
    cout << " Enter a Binary Number " << endl;
    cin >> s;
}

void checkstring ::chk(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Enter Number is not a binary" << endl;
            exit(0);
        }

    }
}

void checkstring ::ones_compliment(void)
{   cout<<"ones_compliment"<<endl;
    chk();
    for(int i = 0; i < s.length() ; i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else if (s.at(i) = '0')
        {
            s.at(i) = '1';
        }
    }
}  
  
void checkstring::display(void){
    cout<<"display"<<endl;

    for(int i=0  ; i<s.length() ; i++){
        cout<<s.at(i);
    }
    cout<<endl;  
}

int main()
{
    checkstring O1;
    O1.read();
    // O1.chk();          //This will throw error.
    O1.display();
    O1.ones_compliment();
    O1.display();


    return 0;
}