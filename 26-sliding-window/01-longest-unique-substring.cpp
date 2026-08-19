int maxUniqueSubstring(string& s) {
    //code here
    int start=0, end=0, n=s.size();

    bool freq[256] = {0};
    int ans = 0;

    while (end < n){
        // check if current char is qunique
        while(freq[s[end]]){  //while current character is present in array
            freq[s[start]] = 0; // changes start element count to 0
            start++;  
        }

        freq[s[end]] = 1;  // if no repeat, change the curr count to 1
        end++;

        ans = max(ans, end-start);
    }

    return ans;
}