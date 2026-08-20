int findSubString(string str) {
    // Your code here
    int totalUnique = 0, n=str.size();
    bool freq[256] = {0};

    // 1. find all unique characters
    for(int i=0; i<n; i++){
        if(freq[str[i]] == 0){
            freq[str[i]] = 1;
            totalUnique++;
        }
    }

    // sliding window
    int start=0, end=0, ans=str.size(), currUnique = 0;
    int count[256] = {0};

    while(end < n){
        count[str[end]]++;

        if(count[str[end]] == 1){
            currUnique++;
        }

        while(currUnique == totalUnique){
            ans = min(ans, end-start+1);
            count[str[start]]--;

            if(count[str[start]] == 0){
                currUnique--;
            }

            start++;
        }
        end++;
    }

    return ans;
}