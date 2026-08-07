string sort(string s) {
    // Code here
    int arr[26] = {0};
    int n = s.size();

    for(int i=0; i<n; i++){
        arr[s[i]-'a']++;
    }

    string str;
    for(int i=0; i<26; i++){
        if(arr[i] != 0){
            int count = arr[i];
            while(count != 0){
                str.push_back('a'+i);
                count--;
            }
        }
    }

    return str;
}
