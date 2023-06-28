#include <iostream>
#include <string>

using namespace std;


int main()
{
    char symbol ;
    int n ;
    cin >> symbol ;
    cin >> n ;
    int each ;
    for (int i = 0; i < n; i++)
    {
        cin >> each ;
        for (int j = 0; j < each; j++)
        {
            cout << symbol ;
        }
        cout << "\n" ;
        
    }
    
    

    
    

    return 0;
}
