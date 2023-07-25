#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long long n1, n2;
    cin >> n1 >> n2;
    cout << (n1 % 10) + (n2 % 10);
    return 0;
}