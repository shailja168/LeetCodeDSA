class Solution {
public:
    int calculate(string s) {
        // removing spaces
        s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
        int idx = 0;
        return solve(s,idx);
    }

    int solve(string s, int& idx){
        int ans = 0;
        int sign = 1;  //'+'=1, '-'=-1
        int sum = 0;

        for(; idx<s.size(); idx++){
            if(s[idx] == '+' || s[idx] == '-'){
                ans += sign*(sum);
                sum=0;
                sign = (s[idx] == '+')?1:-1;
            }
            else if(s[idx]=='(') ans += sign*solve(s, ++idx);
            else if(s[idx]==')') break;
            else sum = sum*10 + (s[idx] - '0');
        }
        return ans+sign*(sum);
    }
};