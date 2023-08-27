#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long n, m, k , res = 0;
    cin >> n >> m >> k;

   long long X = min({n , m , k});
    
    res += X ;
    n -= X ;
    m -= X ;
    k -= X ;

    X = min(n/2 , k);
    res += X ;
    cout << res ;
    return 0;
}
