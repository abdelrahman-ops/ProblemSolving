#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a1[n];
    int a2[n];

    for (int i = 0; i < n; ++i) 
    {
        int value ;
        cin >> value ;
        a1[i] = value;
        a2[i] = value ;
    }

    int var1 = 0 , var2 = 0 ;
    int counter1 = 0 , counter2 = 1 ;
    
    a2[0] *= -1 ;
    
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            var1 = a1[i];
            var2 = a2[i];
        }
        else
        {
            if ((var1  > 0 && a1[i] > 0) || (var1 < 0 && a1[i] < 0))
            {
                a1[i] *= -1 ;
                counter1++ ;
            }
            if ((var2  > 0 && a2[i] > 0) || (var2 < 0 && a2[i] < 0))
            {
                a2[i] *= -1 ;
                counter2++ ;
            }
            var1 = a1[i] ;
            var2 = a2[i] ;
        }
    }

    cout << min(counter1,counter2) ; 
    





    return 0;
}
