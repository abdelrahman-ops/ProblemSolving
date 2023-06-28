#include <iostream>


using namespace std ;

int main() 
{
    int a , b ;
    cin >> a  >> b  ;
    
    if((a + b) % 2 != 0 && (max(a,b) - min(a,b)) == 1)
    {
        cout << "YES" ;
    }
    else if ((a + b) % 2 == 0 && (max(a,b) - min(a,b)) == 1)
    {
        cout << "YES" ;
    }
    else if (a > 1 && a == b)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    
    

    return 0;
}