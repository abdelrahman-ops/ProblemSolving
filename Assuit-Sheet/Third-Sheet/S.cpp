#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    int x;
    bool found = false;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    cin >> x;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (x == arr[i][j])
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    if (found)
    {
        cout << "will not take number";
    }
    else
    {
        cout << "will take number";
    }

    return 0;
}
