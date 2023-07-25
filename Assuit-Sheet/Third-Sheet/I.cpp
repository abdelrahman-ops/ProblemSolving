#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // Ai + Aj + j - i
    int Test;
    cin >> Test;

    while (Test--)
    {
        int size;
        cin >> size;
        int arr[size];

        for (int c_size = 0; c_size < size; c_size++)
        {
            cin >> arr[c_size];
        }

        int min_sum = INT_MAX;
        for (int i = 1; i < size; i++)
        {
            for (int j = i + 1; j <= size; j++)
            {
                int sum = arr[i - 1] + arr[j - 1] + j - i;
                if (sum < min_sum) {
                    min_sum = sum;
                }
            }
        }
        cout << min_sum << endl;
    }
    return 0;
}