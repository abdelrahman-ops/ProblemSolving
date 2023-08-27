#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;

    int max_Kat = 0;
    if (n == 1 && m >= 1 && k >=1 )
    {
        max_Kat = 1 ;
    }
    else{
        if (k >= (n-m)/2 )
        {
            max_Kat = m + (n-m) / 2 ;
        }
        else
        {
            max_Kat = n ;
        }
        /* while(n >= 1  && m >= 1 && k >=1 )
        {
            if (k >= (n-m)/2 )
            {
                max_Kat = m + (n-m) / 2 ;
            }
            else
            {
                max_Kat = n ;
            } */
            /* else if (m >= 2*n && k >= 2*n)
            {
                max_Kat = n ;
            }
            else
            {
                max_Kat = n ;
            } 
        }*/
    }
   
    cout << max_Kat << endl;

    return 0;
}
