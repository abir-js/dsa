class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        int second_largest = -1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] > largest) {
                largest = arr[i];
            }
        }
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==largest) continue;
            else if (arr[i] > second_largest) 
                second_largest = arr[i];
        }
        return second_largest;
    }
};