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
    int maxDepth(Node* root) {
        if(root==NULL) return 0;
        vector<Node*> temp=root->children;
        int nodeSize=temp.size();
        int depth=0;
        for(int i=0;i<nodeSize;i++){
            depth=max(depth,maxDepth(temp[i]));
        }
        return depth+1;

    }
};