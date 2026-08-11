class Solution {
    public:
    string addStrings(string num1, string num2) {
        //Code here

        int num1End = num1.size()-1;
        int num2End = num2.size()-1;
        int carry = 0;

        string ans;

        while(num1End >= 0 || num2End >= 0 || carry != 0){

            int sum = carry;

            if(num1End>=0){
                sum += num1[num1End] - '0';
                num1End--;
            }

            if(num2End>=0){
                sum += num2[num2End] - '0';
                num2End--;
            }

            ans.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        
        reverse(ans.begin(), ans.end());

        return ans;
    }
};