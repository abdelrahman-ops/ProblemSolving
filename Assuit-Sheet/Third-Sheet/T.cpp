#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N ;
    int arr[N][N];
    int prim_sum = 0 , sec_sum = 0 ;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        prim_sum += arr[i][i];
        sec_sum += arr[i][N - 1 - i];
    }
    cout << abs(prim_sum -sec_sum);
    return 0;
}
