#include <iostream>
using namespace std;
int main()
{

    int **arr = new int *[5];

    for (int i = 0; i < 5; i++)
    {
        arr[i] = new int[6];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            arr[i][j] = i + j;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}