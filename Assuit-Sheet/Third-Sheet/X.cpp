#include <iostream>
using namespace std;


int main()
{
    int N, M;
    cin >> N >> M;

    char A[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }

    int X, Y;
    cin >> X >> Y;
    X--;
    Y--;
    if (X >= 0 && X < N && Y >= 0 && Y < M)
    {
        if (( X - 1 == 0 || Y - 1 == 0) || (X - 1 ==0  || Y == 0) || (X - 1 ==0 || Y + 1 ==0) || (X ==0 || Y - 1 ==0) || (X ==0|| Y + 1 ==0) || (X + 1 ==0|| Y - 1 ==0) || (X + 1 ==0|| Y ==0) || (X + 1 ==0 || Y + 1 ==0))
        {
            if (A[X - 1][Y - 1] == 'x' && A[X - 1][Y] == 'x' && A[X - 1][Y + 1] == 'x' && A[X][Y - 1] == 'x' && A[X][Y + 1] == 'x' && A[X + 1][Y - 1] == 'x' && A[X + 1][Y] == 'x' && A[X + 1][Y + 1] == 'x')
            {
                cout << "YES";
            }
            else cout << "NO";
        }
        /* else if (A[X - 1][Y - 1] == 'x' && A[X - 1][Y] == 'x' && A[X - 1][Y + 1] == 'x' && A[X][Y - 1] == 'x' && A[X][Y + 1] == 'x' && A[X + 1][Y - 1] == 'x' && A[X + 1][Y] == 'x' && A[X + 1][Y + 1] == 'x')
        {
            cout << "YES";
        } */
            
    }

    return 0;
}
