#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size ;
    cin >> size ;
    long long arr[size] , sub[size] ;
    int flag = 0 ;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin >> sub[i];
    }
    
    sort(arr, arr + size);
    sort(sub, sub + size);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != sub[i])
        {
            flag = 1 ;
            break;
        }
        else flag = 0 ;
    }
    if (flag == 0)
    {
        cout << "yes" ;
    }
    else cout <<"no";
    
    
    
}