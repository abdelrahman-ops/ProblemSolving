#include <iostream>

using namespace std ;

int main()
{
    int num ;
    cin >> num ;
    int fd = num / 10 ;
    int sd = num % 10 ; 
    if (sd == 0)
    {
        cout <<"YES" ;
    }
    else if ( (fd % sd == 0) || (sd % fd == 0))
    {
        cout <<"YES";
    }
    else
    {
        cout <<"NO" ;
    }
}