#include <iostream>

#include <cmath>
using namespace std;

int main() 
{
    int T  ;
    cin >> T ;
    long long n ;
    for (int i = 0; i < T; i++)
    {
        cin >> n ;
        int ones = 0;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                ones++ ;
            }
            n /= 2 ;
        }
        long long sum = 0 ;
        for(int j = 0 ; j < ones ;j++)
        {
            sum += 1 * pow(2 , j) ;
        }
        cout << sum << endl;
    }
    
    

    
    return 0;
}