#include <iostream>
using namespace std;

void wishBday(int n)
{

    if (n == 0)
    {
        cout << "Happy Birthday";
        return;
    }

    cout << n << " days left for birthday\n";
    wishBday(n - 1);
}

int main()
{

    wishBday(10);

    return 0;
}