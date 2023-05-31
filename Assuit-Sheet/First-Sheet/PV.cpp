#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m ;
    char ch ;
    cin >> n >> ch >> m ;
    switch (ch)
    {
    case '>':
        if (n > m)
        {
            cout <<"Right";
        }
        else
        {
            cout << "Wrong" ;
        }
        break;
    case '<':
        if (n < m)
        {
            cout <<"Right";
        }
        else
        {
            cout << "Wrong" ;
        }
        break;
    case '=':
        if (n == m)
        {
            cout <<"Right";
        }
        else
        {
            cout << "Wrong" ;
        }
        break;
    default:
        break;
    }
    

    return 0;
}
