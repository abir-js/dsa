#include<iostream>
using namespace std;


int main(){
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int j = 0; j<n; j++){
        int index = j;
        for(int i=j+1; i<n; i++){
            if(arr[i] < arr[index]){
                index = i;
            }
        }

        swap(arr[j], arr[index]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}