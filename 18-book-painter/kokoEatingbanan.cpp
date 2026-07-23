

bool isEatingPossible(int maxSpeed, vector<int>& arr, int h){
    long long totalTime=0;
    for(int i=0; i<arr.size(); i++){
        totalTime += arr[i]/maxSpeed;
        if(arr[i]%maxSpeed){
            totalTime++;
        }
    }

    return totalTime <= h;
}

int minEatingSpeed(vector<int>& arr, int h) {
    long long start = 1, end=0, n = arr.size(), ans;

    for(int i=0; i<n; i++){
        end += arr[i];
    }

    while (start <= end){
        long long mid = start + (end - start) / 2;

        if(isEatingPossible(mid, arr, h)){
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return ans;
}
