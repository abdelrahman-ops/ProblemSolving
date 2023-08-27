#include <iostream>
#include <algorithm>
using namespace std ;

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // Find the maximum element in the array
    auto minElement = min_element(arr, arr + size);

    // Calculate the position/index of the maximum element
    int minIndex = distance(arr, minElement);

    cout <<*minElement <<" "<<minIndex+1;

    return 0;
}
