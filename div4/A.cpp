#include <iostream> 
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    int a , b , c;
    while (t--)
    {
        cin >> a >> b >> c ;
        if (a + b >= 10 || a + c >= 10 || b + c >=10)
        {
            cout << "YES" <<endl;
        }
        else
            cout << "NO" <<endl;
    }
    
    
    
    
}