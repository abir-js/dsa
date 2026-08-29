

#include <iostream>
using namespace std;

void printArray(int *p, int index, int size)
{
    if (index == size)
        return;

    cout << p[index] << " ";
    printArray(p, index + 1, size);
}

int main()
{
    cout << "Array elements: ";
    int arr[5] = {10, 20, 30, 40, 50};

    printArray(arr, 0, 5);
    cout << endl;

    return 0;
}