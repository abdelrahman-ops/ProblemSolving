#include <iostream>

using namespace std ;

int main() 
{
    int N;
    cin >> N;
    
    int a = 0 ;
    int b = 1 ;
    if (N == 2)
    {
        cout << a << " " << b << " " ;
    }
    else if (N== 1)
    {
        cout << a << " " ;
    }
    else
    {
        cout << a << " " << b << " " ;
        for (int i = 1; i < N-1 ; i++)
        {
            int next = a + b ;
            cout << next << " " ;
            a = b ;
            b = next ;
            
        }
    }
    
    return 0;
}
