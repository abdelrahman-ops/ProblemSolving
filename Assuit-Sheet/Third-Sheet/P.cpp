#include <iostream>

using namespace std;
bool all_even(long long array[] , int N)
{
    for (int i = 0; i < N; i++)
    {
        if (array[i] % 2 != 0)
        {
            return false ;
        }
    }
    return true ;
}
int operation(long long* array ,int size)
{
    int c_even = 0;
    while (all_even(array , size))
    {
        for (int i = 0; i < size; i++)
        {
            array[i] = array[i] / 2 ;
        }
        c_even++ ;
    }
    return c_even ;
}
int main()
{
    int n ;
    cin >> n ;
    long long arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    int counter = operation(arr , n) ;
    
    
    
    cout << counter ;
    
}