class Solution {
public:
    bool isNextCharBigger(char first, char second){
        string roman = "IVXLCDM";
        
        if(first == second){
            return false;
        }
        
        for(int i=0; i<7; i++){
            if(first == roman[i]){
                return true;
            }
            else if(second == roman[i]){
                return false;
            }
        }
        
        return false; // Add default return
    }
    
    int findValue(char c){
        int value[] = {1, 5, 10, 50, 100, 500, 1000};
        string roman = "IVXLCDM";
        
        for(int i=0; i<7; i++){
            if(c == roman[i]){
                return value[i];
            }
        }
        
        return 0; // Add default return
    }
    
    int romanToInt(string s) {
        int n = s.size(), idx = 0;
        int ans = 0;
        
        while(idx < n){
            // Check if there's a next character AND it's bigger
            if(idx + 1 < n && isNextCharBigger(s[idx], s[idx+1])){
                ans -= findValue(s[idx]);
            }else{
                ans += findValue(s[idx]);
            }
            
            idx++;
        }
        
        return ans;
    }
};
