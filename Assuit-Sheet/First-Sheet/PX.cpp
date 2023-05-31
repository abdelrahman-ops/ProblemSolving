#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long L1 , R1 , L2 ,R2 ;
    cin >> L1 >> R1 >> L2 >> R2 ;

    if(R1 < L2 || R2 < L1)
    {
        cout << "-1" ;
    }
    else
    {
        int left = max(L1, L2);
        int right = min(R1, R2);
        cout << left << " " << right;
    }
    return 0;
}
