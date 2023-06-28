#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    long long num;
    for (int j = 0; j < t; j++)
    {
        cin >> num;
        string arr = to_string(num);
        long long len = arr.length();
        for (int i = len; i > 0; i--)
        {
            cout << arr[i - 1] << " ";
        }
        cout << "\n";
    }

    return 0;
}
