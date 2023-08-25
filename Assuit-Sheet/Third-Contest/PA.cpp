#include <iostream>
using namespace std ;
int main() 
{
    int T ;
    cin >> T ;
    long long h , w ;
    while (T--)
    {
        cin >> h >> w ;
        if(h == w)
        {
            cout << "Square" <<endl;
        }
        else cout << "Rectangle" <<endl;
    }
    

}