#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int X, P;
    cin >> X >> P;

    double price_before_discount = P / ((100.0 - X) / 100.0);
    double rounded_price = ceil(price_before_discount * 100) / 100;

    cout << fixed << setprecision(2) << rounded_price << endl;

    return 0;
}
