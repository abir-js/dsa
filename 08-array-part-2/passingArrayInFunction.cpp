#include <iostream>
using namespace std;

void printArray(int a[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    // cout << a << endl ;
}

int main()
{
    int arr[5] = {10, 20, 11, 24, 5};

    // cout << arr << endl;
    printArray(arr, 5);
    return 0;
}