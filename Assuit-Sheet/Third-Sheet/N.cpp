#include <iostream>
#include <string>

using namespace std;

bool code_check(int A , int B , string code)
{
    if(code.length() != A + B + 1)
    {
        return false ;
    }
    if (code[A] != '-' )
    {
        return false ;
    }

    for (int i = 0; i < A + B +1; i++)
    {
        if (i != A && !isdigit(code[i]))
        {
            return false ;
        }
        
    }
    
    return true ;
    
}

int main()
{
    int a , b;
    cin >> a >> b ;
    string s ;
    cin >> s ;
    
    if(code_check(a , b , s))
    {
        cout << "Yes" ;
    }
    else cout << "No" ;
   
}