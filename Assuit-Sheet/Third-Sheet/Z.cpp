#include <iostream>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    int arr[N];
    int flag = 0 ;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < Q; i++)
    {
        int x ;
        cin >> x ;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] == x)
            {
                flag = 0 ;
            }
        }
        if (flag == 1)
        {
            cout << "not found" <<endl;
        }
        else cout << "found" <<endl;
        flag = 0 ;
        
        
    }
    
}
