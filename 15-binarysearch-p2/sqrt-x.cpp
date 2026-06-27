int mySqrt(int x) {
    // Your code here

    if(x <= 1){
        return x;
    }

    int start = 1, end = x/2;
    int ans;
    while(start <= end){
        int mid = start + (end - start)/2;

        if(mid == x/mid){
            return mid;
        }
        else if(mid < x/mid){
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}