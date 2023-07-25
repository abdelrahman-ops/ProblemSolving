#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n1, n2 , res;
    char sign , equal ;
    cin >> n1 >> sign >> n2 >> equal >> res ;
    switch (sign)
    {
    case '+':
        if (n1 + n2 == res)
        {
            cout << "Yes" ;
        }
        else
        {
            cout << n1 + n2 ;
        }
        break;
    case '-':
        if (n1 - n2 == res)
        {
            cout << "Yes" ;
        }
        else
        {
            cout << n1 - n2 ;
        }
        break;
    case '*':
        if (n1 * n2 == res)
        {
            cout << "Yes" ;
        }
        else
        {
            cout << n1 * n2 ;
        }
        break;
    default:
        break;
    }
    
    return 0;
}
