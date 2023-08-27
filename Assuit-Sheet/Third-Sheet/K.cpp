#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int sum = 0;
    char digit ;
    for (int i = 0; i < size; i++)
    {
        cin >> digit;
        sum += digit - '0' ;
    }
    cout << sum ;

}