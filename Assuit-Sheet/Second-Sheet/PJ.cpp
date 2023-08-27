#include <iostream>

using namespace std;
bool is_prime(int num)
{
    if(num < 2){
        return false ;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false ;
        }
    }
    return true ;
}
int main() 
{
    int n ;
    cin >> n;

    for (int num = 2; num <= n; num++)
    {
        if (is_prime(num))
        {
            cout << num << " " ;
        }
        
    }
    return 0;
}
