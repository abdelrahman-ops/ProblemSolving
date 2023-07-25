#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    long long arr[size];
    long long sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    if (sum < 0)
    {
        sum *= -1;
        cout << sum;
    }
    else
        cout << sum;
}