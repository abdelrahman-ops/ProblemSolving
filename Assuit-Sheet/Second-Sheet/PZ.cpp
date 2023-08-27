#include <iostream>

using namespace std ;

int main() 
{
    int k , s ;
    cin >> k >> s ;
    int counter = 0 ;
    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            if (s - x - y >= 0 && s - x - y <= k)
            {
                counter++ ;
            }
            
            
        }
    }

    cout << counter ;
    
    return 0;
}
