#include <iostream>

using namespace std; 

int main()
{
    int n ;
    cin >> n ;                                 
    int mid = n / 2 ;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col< n; col++)
        {
            if (row == col && row != mid && col != mid)
            {
                cout << "\\"  ;
            }
            else if (row == mid && col == mid )
            {
                cout << "X" ;
            }
            else if (col != mid && row == ((n-1)-col))
            {
                cout <<"/" ;
            }
            else
            {
                cout <<"*" ;
            }
        }
        cout <<endl;
    }
   
    
    return 0;
}
