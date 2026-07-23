bool allocateBook(int maxPage, vector<int> &arr, int k) {
    // fist student will always get book 1
    int studentCount = 1;
    int pages = 0;

    for (int i = 0; i < arr.size(); i++) {

        if (pages + arr[i] <= maxPage) {
            pages += arr[i];
        }
        else {
            studentCount++;
            pages = arr[i];
        }
    }

    // if books can be devided into 2 among 3, then it might be divided into 3 students
    return studentCount <= k;
}

int findPages(vector<int> &arr, int k) {
    // Your code here
    int n = arr.size();

    if(k > n)
    return -1;

    // take array max
    int maximum = 0, totalPages=0;
    for(int i=0; i<n; i++){
        maximum = max(maximum, arr[i]);
        totalPages += arr[i];
    }

    int ans = 0;
    while(maximum <= totalPages){
        int mid = maximum + (totalPages-maximum)/2;

        if(allocateBook(mid, arr, k)){
            ans = mid;
            totalPages = mid - 1;
        }
        else {
            maximum = mid + 1;
        }
    }

    return ans;
}