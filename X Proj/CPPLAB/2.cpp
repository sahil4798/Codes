#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    // public:
    char name[64];
    int age;
    char adress[64];
    int salary;

public:
    Person()
    {
    }
    void Setdata(char a[], int b, char c[], int d)
    {
        strcpy(name, a);
        age = b;
        strcpy(adress, c);
        salary = d;
    }

    void YoungestEldest(Person obj[], int n)
    {
        class Person o;
        int max = 982787;
        int min = -983746;

        for (int i = 0; i < n; i++)
        {
            if (obj[i].age < max)
            {
                max = obj[i].age;
                o = obj[i];
            }
        }
        cout << "The youngest is :" << o.name << endl;

        for (int i = 0; i < n; i++)
        {
            if (obj[i].age > min)
            {
                min = obj[i].age;
                o = obj[i];
            }
        }
        cout << "The Eldest is :" << o.name << endl;
    }

    void Display(Person obj[], int n)
    {

        for (int i = 0; i < n; i++)
        {
            cout << "The salary of " << obj[i].name << " is " << obj[i].salary <<"K $"<< endl;
        }
    }
};

int main()
{

    // Person *ptr = new Person[10];
    // ptr[0]->Setdata(A, 1, a, 11);

    // Person *ptr = obj;
    // ptr->Setdata(A, 1, a, 11);
    // ptr[0]->Setdata(A, 1, a, 11);

    // Person obj[5];
    // char A[] = "sahil";
    // char a[] = "Meerut";
    // obj[0].Setdata(A, 8, a, 110);
    // char B[] = "Akugi";
    // char b[] = "punkhazard";
    // obj[1].Setdata(B, 2, b, 120);
    // char C[] = "Akainu";
    // char c[] = "Marineford";
    // obj[2].Setdata(C, 4, c, 130);
    // char D[] = "Shanks";
    // char d[] = "Island";
    // obj[3].Setdata(D, 20, d, 140);
    // char E[] = "Buggy";
    // char e[] = "circus";
    // obj[4].Setdata(E, 1, e, 150);

    // obj->YoungestEldest(obj, 5);
    // obj->Display(obj , 5);
    
    int n;
    char S[64] , s[64];
    int age , salary;
    cout<<"Enter the Number of Employes :";
    cin>>n;
    Person ptr[n] ;

    for(int i =0 ; i<n ; i++)
    {   
        cout<<"Enter Name , Age , Adress and Salary :";
        cin>>S>>age>>s>>salary;
        ptr[i].Setdata( S , age , s , salary);
        
    }

    ptr->YoungestEldest(ptr , n);
    ptr->Display(ptr, n);
    

    return 0;
}