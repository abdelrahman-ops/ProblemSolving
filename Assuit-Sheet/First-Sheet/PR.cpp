#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int n_month , n_year ;

    n_year = n / 365 ;
    n = n - (n_year * 365) ;
    n_month = n / 30 ;
    n = n - (n_month * 30) ;

    cout << n_year <<" years" << endl ;
    cout << n_month <<" months" << endl;
    cout << n << " days" << endl;
}