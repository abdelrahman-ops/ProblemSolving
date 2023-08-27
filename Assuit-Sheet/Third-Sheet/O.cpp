#include <iostream>


using namespace std;

/* int fib(int n)
{
    if (n == 1)
    {
        return 0 ;
    }
    else if (n == 2)
    {
        return 1;
    }

    return fib(n-1) + fib(n-2);
    
    
}
 */

int main()
{
    long long num ;
    cin >> num ;
    long long f = 0 ;
    long long s = 1 ;
    long long res = 0 ;
    if (num == 1)
    {
        cout << 0 ;
    }
    else if (num == 2)
    {
        cout << 1 ;
    }
    else
    {
        for (long long i = 3; i <= num; i++)
        {
            res = f + s ;
            f = s ;
            s = res ;
        }
        cout << res ;
    }
    
   
}