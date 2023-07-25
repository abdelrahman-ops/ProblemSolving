#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    if (n1 > n2)
        cout << "Yes";
    else if (n1 == n2)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
