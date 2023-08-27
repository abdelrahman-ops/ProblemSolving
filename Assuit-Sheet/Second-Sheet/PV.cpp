#include <iostream>
#include <string>

using namespace std;



int main() 
{
    int n  ;
    cin >> n ;
    int num = 1 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0 ; j < 4; j++)
        {
            if (j == 3)
            {
                cout << "PUM" ;
                num++ ;
            }
            else
            {
                cout << num << " ";
                num++;
            }
        }
        cout << "\n" ;
        
    }
    
    return 0;
}