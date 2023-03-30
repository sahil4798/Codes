#include <iostream>
using namespace std;

class maiin
{
protected:
    int numberOfItems;
    int powerOfItems;
    float noOfHours;

public:
    void set_data(int x, int y, float z)
    {
        numberOfItems = x;
        powerOfItems = y;
        noOfHours = z;
    }
    void display(void)
    {
        cout << "The number of Item is :" << numberOfItems << endl;
        cout << "The power of Item is :" << powerOfItems << endl;
        cout << "The Consption time of Item is :" << noOfHours << endl;
    }
};

class calculation : public maiin
{

    int r;

public:
    // void setrate(int x){
    //     r=x;
    // }
    
    calculation(void)
    {
        r = 10;
    }

    float calc(void)
    {
        // cout << r << endl;
        return numberOfItems * powerOfItems * noOfHours* r;
    }

    void calc2(void)
    {
        cout << numberOfItems * powerOfItems * noOfHours * r << endl;
    }
};

int main()
{
    int N;
    cout << "Enter the number of different type of applainces" << endl;
    cin >> N;
    int n, p;
    float t;
    calculation obj[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Enter the total number of" << i + 1 << "dublicate applainces" << endl;
        cin >> n;
        cout << "Enter the power ratig of those dublicate applainces" << endl;
        cin >> p;
        cout << "Enter the total time in  hours of usage for those dublicate applainces" << endl;
        cin >> t;
        obj[i].set_data(n, p, t);
    }

    for (int i = 0; i < N; i++)
    {

        obj[i].display();
    }

    //  int r;
    //  cout<<"Enter the rate of one unit in rupees"<<endl;
    //  cin>>r;
    // //  obj[N].setrate;
    //  obj->setrate(r);

    // cout << obj[0].calc() << endl;
    // obj[0].calc2();

    int total_expense=0;
    for(int i=0 ; i<N ; i++){
      obj[i].calc( );

      total_expense = total_expense + obj[i].calc();
    }

    cout<<total_expense;

    return 0;
}