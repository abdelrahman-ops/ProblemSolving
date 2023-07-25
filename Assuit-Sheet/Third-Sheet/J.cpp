#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int count  = 1 ;
    sort(arr , arr+size) ;
    for (int i = 0; i < size; i++)
    {
        if (arr[0] == arr[i+1])
        {
            count++ ;
        }
    }
    if (count % 2  == 0)
    {
       cout << "Unlucky" << endl; 
    }
    else
        cout << "Lucky" << endl;
}