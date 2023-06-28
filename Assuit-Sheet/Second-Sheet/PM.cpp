#include <iostream>
#include <string>

using namespace std;

bool isLuckyNumber(int num)
{
    string numStr = to_string(num);

    for (char c : numStr)
    {
        if (c != '4' && c != '7')
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int A, B;
    cin >> A >> B;

    bool foundLuckyNumber = false;

    for (int i = A; i <= B; i++)
    {
        if (isLuckyNumber(i))
        {
            cout << i << " ";
            foundLuckyNumber = true;
        }
    }

    if (!foundLuckyNumber)
    {
        cout << -1;
    }

    cout << endl;

    return 0;
}
