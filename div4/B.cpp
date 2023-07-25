#include <iostream> 
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    int res , word , qua win = 0 , bi_qua = 0;
    while (t--)
    {
        cin >> res ;
        for (int i = 1; i <= res; i++)
        {
            cin >> word >> qua ;
            if(word <= 10 && qua > bi_qua)
            {
                win = i;
                bi_qua = qua ;
            }
        }
        
    }
    
    
    
    
}