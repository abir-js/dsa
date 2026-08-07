string toLower(string &s) {
    // Your code here

    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            // s[i] = (s[i] - 'A') + 'a';
            s[i] += 32;
        }
    }

    return s;

}