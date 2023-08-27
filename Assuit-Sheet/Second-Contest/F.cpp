#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max_f = 0;
    long long num ;
    for (int i = 0; i < n; i++)
    {
        cin >> num ;
        int c = 0 ;
        
        while (num % 2 == 0)
        {
            num /= 2;
            c++;
        }
        max_f = max(max_f, c);
    }
    cout << max_f;

    return 0;
}