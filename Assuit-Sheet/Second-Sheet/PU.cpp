#include <iostream>
#include <string>

using namespace std;

int digit_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int total = 0;
    for (int i = 1; i <= n; i++) {
        int sum = digit_sum(i);
        if (a <= sum && sum <= b) {
            total += i;
        }
    }
    cout << total << endl;
    return 0;
}