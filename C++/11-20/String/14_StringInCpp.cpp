#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    //*****************DECLARATION***********************
    string s1;
    string s2{"Sahil"};
    string s0{"Akhil"};
    string s3{s2};
    string s4{s2, 0, 3};
    string s5(5, 'Y');

    //*****************printing***********************
    // cout<<s1.length();
    // cout<<s2<<endl;
    // cout<<s3<<endl;
    // cout<<s4<<endl;
    // cout<<s5<<endl;

    //*****************ASSIGNMENT ***********************
    // s1 = "sahil";
    // cout<<s1<<endl;
    // s2 = "is doing coding";

    //*****************CONCATENATION***********************
    // cout<<s1+" "+s2+""<<endl;
    // string sentence ;
    // // sentence = s1+" "+s2+ ;
    // // sentence = s1+s2;
    // // sentence = "sahil "+"is doing coding" ;
    // cout<<sentence<<endl;

    //*****************ACESSING CHARACTER***********************
    // string s6 = "yorker" ;
    // cout<<s6[0]<<endl;
    // cout<<s6.at(0)<<endl;
    // // cout<<s6.at(10);           //Throw error .at() provide us advantage of bound check So we will prefer .at over []
    // // cout<<s6[10];               //Not throw Error.

    // s6.at(0)='t';
    // cout<<s6<<endl;

    //*****************Comparison***********************
    cout << boolalpha;
    cout << s2 << "==" << s3 << " : " << (s2 == s3) << endl;
    cout << s2 << "<" << s0 << " : " << (s2 < s0) << endl;

    // *******************Loop*************************
    for (int i = 0; i < s2.length(); i++)
    {
        cout << s2.at(i) << " ";
    }
    cout << endl;

    // for (size_t i{0}; i < s2.length(); ++i)
    // {
    //     cout << s2.at(i);
    //     cout << endl;
    // }
    // cout << endl;
    // // Range-based for loop
    //    for (char  c: s1)
    //        cout << c;     // Apple
    //    cout << endl;

    //**************************substing******************************
    string s{"this is it"};
    cout << s.substr(0, 3) << endl;
    cout << s.substr(5, 3) << endl;
    cout << s.substr(9, 3) << endl;

    //*********************ERASE*********************

    string S{"this is it"};
    S.erase(0, 4);
    cout << S << endl;

    //   ************************getline**********************
    //   string full_name ;
    //   cout<<"Enter your full name ";
    //   getline(cin, full_name);
    //   cout<<full_name<<endl;
    //   //   cin>>full_name;
    //   //   cout<<full_name<<endl;

    //**********************Find***********************
    string S2;
    S2 = "this is all sorry sauske";
    // cout << s2.find("sauske")<<endl;  //Not Working

    string word{};
    cout << "Enter the word to find: ";
    cin >> word;

    size_t position = S2.find(word);
    if (position != string::npos)
        cout << "Found " << word << " at position: " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;

    return 0;
}