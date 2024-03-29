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
        if (!root) {
            return {};
        }
        vector<int> res;
        collect(root, res);
        return res;
    }
    void collect(Node* root, vector<int>& res) {
        res.push_back(root->val);
        for (auto r : root->children) {
            collect(r, res);
        }
    }
};
