class Solution {
public:
    bool isNumber(string s) {
        s += '\0';   
        bool isNum = false; 
        int i = 0;  
        while(s[i] == ' ') ++i; 
        if(s[i] == '+' || s[i] == '-') ++i; 
        while(s[i] >= '0' && s[i] <= '9') {  
            isNum = true;  
            ++i;
        }
        if(s[i] == '.') ++i;  
        while(s[i] >= '0' && s[i] <= '9') {  
            isNum = true;   
            ++i;
        }
        if(isNum && (s[i] == 'e' || s[i] == 'E')) { 
            ++i;
            isNum = false; 
            if(s[i] == '-' || s[i] == '+') ++i; 
            while(s[i] >= '0' & s[i] <= '9') {
                ++i;
                isNum = true; 
            }
        }
        return (s[i] == '\0' && isNum);
    }
};
