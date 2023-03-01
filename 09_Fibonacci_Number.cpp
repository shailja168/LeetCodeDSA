class Solution {
public:
    int fib(int n) {
        vector<int> f;
        int a = 0, b = 1, c;
        f.push_back(a);
        f.push_back(b);
        for(int i=2; i<31; i++){
            c = a + b;
            a = b;
            b = c;
            f.push_back(c);
        }
        if(n==0) return 0;
        if(n==1) return 1;
        return f[n-1] + f[n-2];
    }
};