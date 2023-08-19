#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i] ;
    }
    
    long long pre_sum[N+1];
    pre_sum[0] = 0;

    for (int i = 1; i <= N; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + arr[i - 1];
    }

    for (int i = 0; i < M; i++)
    {
        int L , R ;
        cin >> L >> R ;

        long long sum = pre_sum[R] - pre_sum[L-1];
        cout << sum << endl ;
    }
    
    
    
    
    
}
