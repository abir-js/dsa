

#include<iostream>
using namespace std;

int add(int *p, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += p[i];
    }
    return sum;
}

int main(){
    

    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    cout << add(arr, 10);

    return 0;
}