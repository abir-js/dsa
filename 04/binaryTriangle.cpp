#include<iostream>
using namespace std;
int main(){

    bool num;

    for(int i=1; i<=5; i++){
        num = i%2;
        for(int j=1; j<=i; j++){
            cout<<num;
            num = !num; 
        }
        cout<<endl;
    }
    return 0;
}