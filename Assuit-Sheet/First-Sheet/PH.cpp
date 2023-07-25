#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int floor(int n1, int n2)
{
    int res = n1 / n2;
    return res;
}
int ceil(int n1, int n2)
{
    int res = n1 / n2;
    if (double(n1) / n2 == 1)
    {
        return res;
    }
    else
    {
        return res + 1;
    }
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << "floor " << n1 << " / " << n2 << " = " << floor(n1, n2) << endl;
    cout << "ceil " << n1 << " / " << n2 << " = " << ceil(n1, n2) << endl;
    cout << "round " << n1 << " / " << n2 << " = " << round(double(n1) / n2) << endl;
    return 0;
}
