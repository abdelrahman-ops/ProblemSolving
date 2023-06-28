#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, m, test;
    int sum = 0;
    cin >> test ;
    for (int i = 0; i < test; i++)
    {
        cin >> n >> m ;
        int start = min(n, m);
        int temp = start ;
        int end = max(n, m);
        if(start % 2 != 0)
        {
            start += 2 ;
            for (int i = start; i < end; i+=2)
            {
                sum += i;
            }
            cout << sum << endl;
            start = temp ;
            sum = 0 ;
        }
        else
        {
            start++ ;
            for (int i = start; i < end; i+=2)
            {
                sum += i;
            }
            cout << sum << endl;
            start = temp ;
            sum = 0 ;
        }
        
    }
    
    return 0;
}
