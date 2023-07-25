#include <iostream>
#include <string>

using namespace std;

int main()
{
    string f, l1, s, l2;
    cin >> f >> l1;
    cin >> s >> l2;

    if (l1.compare(l2) == 0)
    {
        cout << "ARE Brothers";
    }
    else
        cout << "NOT";

    return 0;
}
