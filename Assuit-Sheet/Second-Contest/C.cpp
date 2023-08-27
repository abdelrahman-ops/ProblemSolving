#include <iostream>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int nums[N];
    int mn ;
    int minimums[N/K + 1]; 
    int min_index = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }
    
    for (int i = 0; i < N; i+=K)
    {
        if (nums[i] < mn)
        {
            mn = nums[i];
            minimums[min_index] = mn ;
            min_index++ ;
        }
    }
    for (int i = 0; i < min_index; i++) {
        cout << minimums[i] << " ";
    }
    return 0;
}
