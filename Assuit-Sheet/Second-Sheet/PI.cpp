#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long original = n;
    long long rem = 0;
    long long rev = 0;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (original == rev) {
        cout << rev << endl;
        cout << "YES";
    }
    else {
        cout << rev << endl;
        cout << "NO";
    }
    return 0;
}
