#include <iostream>
using namespace std ;

int main()
{
    long long l , r , t;
    cin >> t ;
    long long sum = 0 ;

    while (t--)
    {
        cin >> l >> r ;
        long long ma = max(l , r);
        long long mi = min(l , r);
        mi-- ;
        long long va1 = mi * (mi+1) / 2 ;
        long long va2 = ma * (ma+1) / 2 ;
        sum = va2 - va1 ;
        cout << sum << endl ;
        sum = 0 ;
    }

    return 0 ;
}