#include <iostream>

using namespace std;

int main()
{
    int size ;
    cin >> size ;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i] ;
    }

    for (int j = size-1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
    
    
}