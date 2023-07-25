#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (isdigit(ch))
    {
        cout << "IS DIGIT";
    }
    else if (isalpha(ch))
    {
        if (islower(ch))
        {
            cout << "ALPHA" << endl;
            cout << "IS SMALL" << endl;
        }
        else
        {
            cout << "ALPHA" << endl;
            cout << "IS CAPITAL" << endl;
        }
    }

    return 0;
}
