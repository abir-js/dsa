#include <iostream>
using namespace std;

void printEvenNum(int n)
{
    if (n < 2)
        return;

    if (n % 2 == 0)
    {
        cout << n << " ";
        printEvenNum(n - 2);
    }
    else
    {
        printEvenNum(n - 1);
    }
}

int main()
{
    printEvenNum(15);
    return 0;
}