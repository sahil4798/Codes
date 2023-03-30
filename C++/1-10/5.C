#include <iostream>
using namespace std;
int main()
{
    float a , M;
    cin >> a;
    M = a;
    while (a >= -28.5 && a <= 195.78)
    {
        cin >> a;
        if (a > M)
        {
            M = a;
        }
    }
    cout << M;

    return 0;
}