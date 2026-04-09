class Solution {
public:
    string convertToBase7(int num) {
        string str="";
        if(num == 0) return "0";
        bool negative = num < 0;
        num = abs(num);
        while(num>0)
        {
            str = char('0' + num%7) + str;
            num /= 7;
        }
        if(negative) str = "-" + str;
        return str;
    }
};