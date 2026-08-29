

#include <iostream>
using namespace std;

int sumArray(int arr[], int idx, int size)
{
    if (idx == size)
        return 0;

    return arr[idx] + sumArray(arr, idx + 1, size);
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    cout << sumArray(arr, 0, 5);

    return 0;
}