#include<iostream>
using namespace std;

class Customer{
public:
    int age, balance;
    string name;
};

int main(){
    

    Customer *c1 = new Customer();
    (*c1).name = "Abir";
    c1->age = 20;
    c1->balance = 1000;

    return 0;
}