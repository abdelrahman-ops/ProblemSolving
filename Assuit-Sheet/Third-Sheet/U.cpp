#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int N , M;
    cin >> N >> M;
    int A[N] , B[M] ;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    int A_PTR = 0 , B_PTR = 0 ;

    while (A_PTR < N && B_PTR < M)
    {
        if (A[A_PTR] == B[B_PTR])
        {
            B_PTR++ ;
        }
        A_PTR++ ;  
    }
    if (B_PTR == M)
    {
        cout <<"YES" ;
    }
    else cout << "NO";
    
    
    
    
    
}
