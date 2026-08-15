class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(256, 0);

        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }

        int count = 0;
        bool isOdd = false;
        for (int i = 0; i < 256; i++) {
            if (freq[i] % 2 == 0) {
                count += freq[i];
            } else {
                count += freq[i] - 1;
                isOdd = true;
            }
        }

        if (isOdd) {
            return count + 1;
        }
        return count;
    }
};