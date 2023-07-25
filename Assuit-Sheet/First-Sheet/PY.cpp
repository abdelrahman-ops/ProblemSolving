#include <iostream>

using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    long long product = A * B * C * D;
    long long last_two_digits = product % 100;
    cout << last_two_digits << endl;
    return 0;
}