#include <iostream>

using namespace std;

int main()
{
    int size , flag = 0;
    cin >> size ;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i] ;
    }
    int n = size ;
    for (int i = 0; i <= n/2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            flag = 1 ;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "YES" ;
    }
    else cout <<"NO" ;
    
    
    
    
}