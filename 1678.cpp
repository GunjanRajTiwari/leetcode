// Goal Parser Interpretation

class Solution {
public:
    string interpret(string command) {
        string ans;
        int i;
        for (i=0; i<command.length(); i++){
            if(command[i]=='(') {
                if (command[i+1]==')') ans+='o';
            } 
            else if (command[i]==')') continue;
            else ans += command[i];
        }
        return ans;
    }
};