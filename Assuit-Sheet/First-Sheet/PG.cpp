#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long long n1;
    long long sum = 0;
    cin >> n1;
    sum = n1 * (n1 + 1) / 2;
    cout << sum;

    return 0;
}