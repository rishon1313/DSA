class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int len = s.size();
        for(int i=0;i<len;i++)
        {
            if(i==len-1 || getNum(s[i])>=getNum(s[i+1]))
            {
                ans += getNum(s[i]);
            }
            else
            {
                ans += getNum(s[i+1]) - getNum(s[i]);
                i+=1;
            }
        }
        return ans;
      
    }
    int getNum(char c)
    {
        switch(c)
        {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
        return 0;
    }
};
