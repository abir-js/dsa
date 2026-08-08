class Solution {
  public:

    bool checkClockwise(string word1, string word2){
        int n = word1.size();

        for(int i=0; i<n; i++){
            if(word1[i] != word2[(i+2)%n]){
                return false;
            }
        }
        return true;
    }
    bool checkAntiClockwise(string word1, string word2){
        int n = word1.size();

        for(int i=0; i<n; i++){
            if(word2[i] != word1[(i+2)%n]){
                return false;
            }
        }
        return true;
    }

    bool isRotated(string& word1, string& word2) {
        // code here
        if(checkClockwise(word1, word2))
            return true;

        if(checkAntiClockwise(word1, word2))
            return true;

        return false;
    }
};