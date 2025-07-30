class Solution {
public:
    bool isValid(string s) {
        vector<char>ans;
        for (int i=0;i<s.size();i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                ans.push_back(s[i]);
            } 
            else {
                if (ans.empty())return false;   
                char top =ans.back(); 
                ans.pop_back();        
                if ((s[i] == ')' && top != '(') ||(s[i] == '}' && top != '{') ||
                    (s[i] == ']' && top != '[')) {
                    return false; 
                }
            }
        }
        return ans.empty();
    }
};
