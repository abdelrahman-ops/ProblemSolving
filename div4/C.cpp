#include <iostream> 
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    
    while (t--)
    {
        char grid[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> grid[i][j] ;                
            }
        }
        string word ;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (grid[i][j] != '.')
                {
                    word.push_back(grid[i][j]);
                }           
            }
        }
       cout << word <<endl;     
        
    }
    
    
    
    
}