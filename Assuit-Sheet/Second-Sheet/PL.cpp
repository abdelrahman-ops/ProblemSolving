#include <iostream>

using namespace std;

int gcd(int a , int b)
{
    while (b != 0)
    {
        int temp = b ;
        b = a % b ;
        a = temp ;
    }
    return a ;

    
}

int main() {
    int n , m;
    cin >> n >> m;
    
    int value = gcd(n , m) ;

    cout << value ;

    


    return 0;
}
