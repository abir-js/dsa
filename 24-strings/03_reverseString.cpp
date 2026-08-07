string reverseString(string &s) {
    // Your code here
    int start=0, end = s.size()-1;

    while (start < end){
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }

    return s;
}