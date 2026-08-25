#include <iostream>
using namespace std;

int main()
{

    int a = 10;

    int *prt = &a; // prt is a pointer variable that stores the address of variable a

    cout << "The value of a is: " << a << endl;
    cout << "The address of a is: " << &a << endl;
    cout << "The value of prt is: " << prt << endl;
    cout << "The value pointed to by prt is: " << *prt << endl;
    cout << "The address of prt is: " << &prt << endl;

    return 0;
}