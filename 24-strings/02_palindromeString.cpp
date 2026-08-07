bool isPalindrome(string& s) {
    // Your code here

    int start = 0, end = s.size() - 1;

    while (start < end){
        if(s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}