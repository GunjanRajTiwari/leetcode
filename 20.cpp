// Valid Parentheses

class Solution {
public:
    bool match(char a,char b){
        if (a=='(' && b == ')') return 1;
        if (a=='{' && b == '}') return 1;
        if (a=='[' && b == ']') return 1;
        return 0;
    }
    bool isValid(string s) {
        vector<char> stack;
        int i;
        for(i=0; i<s.length(); i++){
            if (stack.empty()){
                stack.push_back(s[i]);
                continue;
            }
            if (match(stack[stack.size()-1],s[i])){
                stack.pop_back();
            } else {
                stack.push_back(s[i]);
            }
        }
        return stack.empty();
    }
};