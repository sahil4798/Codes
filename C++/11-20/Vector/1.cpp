#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> V)
{
    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i] << " ";
    }
    cout << endl;
}

int main()
{

    // vector<int> vec1;
    // int element , size ;
    // cout<<"Enter the size of vector ";
    // cin>>size;
    // for(int i=0 ; i<size ; i++){
    //     cout<<"enter "<<i+1 <<" element of vector ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // vec1.pop_back();
    // display(vec1);  //After removing last element from vector.

    vector<int> vec2(10); // We are insialsize size and element i.e zero(0) of vector at time of declaration.
    cout << vec2.size() << endl;
    display(vec2);

    vector<int> vec3{1, 2, 3, 4, 5}; // We are insialsize size and element of vector at time of declaration.
    display(vec3);

    vector<int> vec4(10, 5); // We are insialsize size as well element of vector at time of declaration.
    vec4.size();
    display(vec4);



    // vector<int> vec5;
    // int element, size;
    // cout << "Enter the size of vector ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "enter " << i + 1 << " element of vector ";
    //     cin >> element;
    //     vec5.push_back(element);
    // }
    // vector<int>::iterator itr = vec5.begin();
    // vec5.insert(itr, 44);          //44 1 2 3 4 5 
    // // vec5.insert(itr+2, 44);           // 1 44 2 3 4 5  
    // // vec5.insert(itr+2,4, 44);       // 1 44 44 44 44 2 3 4 5  
    // display(vec5);

    
    // vector<int> vec6 (vec5);   //element  vec5 will inherit in vec6
    // display(vec6);



    vector <int> vec7 {1 ,2 , 3 ,4};
  
    cout<<vec7[0]<<endl;       //cout<<vec7.at(0)<<endl;
    vec7[1] = 0;
    cout<<vec7.at(1)<<endl;
    
    int x;
    cout<<"enter a number :";
    cin>>x;
    // cin>>vec7.at(4);  // this will error we tring to going out from bound of vector.
    vec7.push_back(x);
    display(vec7);
    cout<<vec7.size();




    return 0;
}