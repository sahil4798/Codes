#include <iostream>
using namespace std;
int main()
{
    int N, sum, a, count;
    cin >> N;
    a = 1;
    sum = 2;
    count = 1;
    while (count < N)
    {
        sum = sum + 1;
        a = a + 1;
        count = count + 1;
    }
    cout << sum;

    return 0;
}