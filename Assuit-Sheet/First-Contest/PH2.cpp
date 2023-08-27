#include <iostream>

using namespace std ;

int main() {
    double n, k, a;
    cin >> n >> k >> a;

    double float_result = (n * k) / a;
    long long long_result = (n * k) / a ;

    double final_res = float_result - long_result ;

    if (final_res > 0)
    {
        cout <<"double"<<endl;
    }
    else if (float_result > 2147483647)
    {
        cout << "long long"<< endl;
    }
    else
    {
        cout <<"int"<<endl;
    }




    return 0;
}

