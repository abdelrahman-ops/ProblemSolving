#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    
    int flag = 0;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            cout << i;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << -1;
    }

}