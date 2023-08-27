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
    int max_val = arr[0] ;
    int min_val = arr[0] ;
    int max_ind , min_ind ;
    for (int i = 1; i < size; i++)
    {
        if (max_val > arr[i])
        {
            max_val = arr[i];
            max_ind = i ;
        }
        if (min_val < arr[i])
        {
            min_val = arr[i];
            min_ind = i ;
        }
        
    }
    int temp = arr[min_ind] ;
    arr[min_ind]= arr [max_ind] ;
    arr[max_ind]=temp ;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
}