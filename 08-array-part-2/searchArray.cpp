int search(int arr[], int n, int x) {
    // Code here
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}