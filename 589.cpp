// N-ary Tree Preorder Traversal

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        stack<Node*> stk;
        stk.push(root);
        Node* cur;
        while(!stk.empty()){
            cur = stk.top();
            stk.pop();
            if(cur!=nullptr){
                result.push_back(cur->val);
                for(int i=(cur->children).size()-1;i>=0;i--){
                    stk.push((cur->children)[i]);
                }
            }
        }
        return result;
    }
};