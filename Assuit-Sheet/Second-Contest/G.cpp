#include <iostream>
using namespace std;
int arr[1000005] ;
int main()
{
    long long n, s;
    long long T;
    cin >> T;
    long long counter = 0 ;
    for (int i = 0; i < T; i++)
    {
        cin >> n >> s;
        if( (n*(n+1) / 2 ) < s)
        {
            cout << -1 ;
        }
        else
        {
            long long sum = 0 ;
            for (int j = n; j >= 1; j--)
            {
                if (sum+j <= s)
                {
                    sum += j ;
                    arr[counter] = j ;
                    counter++ ;
                }
                if (sum == s)
                {
                    break;
                }
                
                
            }
            
        }
        for (int x = 0; x < counter; x++)
        {
            cout << arr[x] <<" " ;
        }
        cout << endl ;
        counter = 0 ;
    }

    return 0;
}