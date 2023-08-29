class Solution {
    public String convert(String s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        StringBuilder ans = new StringBuilder("");
        int firstHop = 2 * (numRows - 1);
        int secondHop = 0;
        int flag = 1;
        int currRow = 0;

        while (firstHop >= 0) {
            int temp = currRow;
            while (temp < s.length()) {
                if (flag != 0 && firstHop != 0) {
                    ans.append(s.charAt(temp));
                    temp += firstHop;
                } else {
                    if (secondHop != 0) {
                        ans.append(s.charAt(temp));
                    }
                    temp += secondHop;
                }
                flag = 1 - flag;
            }
            flag = 1;
            firstHop -= 2;
            secondHop += 2;
            currRow++; 
        }
        
        return ans.toString();
    }
}
