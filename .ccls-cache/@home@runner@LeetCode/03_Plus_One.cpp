class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits[digits.size()-1] < 9){
            digits[digits.size()-1]++;
            return digits;
        }
        int i;
        bool increment = false;
        for(i=digits.size()-1;i>0;i--){
            if(digits[i]==9){
                digits[i]=0;
            }
            else{
                digits[i]++;
                increment = true;
                break;
            }
        }
        if(!increment){
            if(digits[0]==9 && i==0){
                digits[0]=0;
                digits.insert(digits.begin(),1);
            }
            else{
                digits[0]++;
            }
        }
        return digits;
    }
};