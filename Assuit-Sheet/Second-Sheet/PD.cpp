#include <iostream>


using namespace std;

int main()
{
    int num ;
    do
    {
        cin >> num ;
        if (num == 1999)
        {
            cout << "Correct" <<endl ;
        }
        else cout << "Wrong" <<endl ;

    } while (num != 1999);


    return 0;
}
