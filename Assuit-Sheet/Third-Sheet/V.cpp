#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int N , M;
    cin >> N >> M;
    int arr[N];
    int frequency[M + 1] = {};
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i] ;
        frequency[arr[i]]++ ;
    }
    
    for (int i = 1; i <= M; i++) 
    {
        cout << frequency[i] << "\n";
    }
    
    
    
}
