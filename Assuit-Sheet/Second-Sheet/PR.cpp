#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, m, sum;
    
    while (cin >> n >> m && n > 0 && m > 0)
    {
        int start = min(n, m);
        int end = max(n, m);
        sum = 0;
        
        for (int i = start; i <= end; i++)
        {
            cout << i << " ";
            sum += i;
        }
        
        cout << "sum =" << sum << endl;
    }
    
    return 0;
}
