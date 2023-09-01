#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool exists[1004] = {false};
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        exists[arr[i]] = true; 
    }

    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (exists[arr[i] + 1])
        {
            counter++;
        }
    }

    cout << counter;

    return 0;
}
