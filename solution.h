
#include<iostream>
using namespace std;


class Solution {
private:
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode();
        TreeNode(int x);
        TreeNode(int x, TreeNode *left, TreeNode *right);
    };

    int ans;

    void pre(TreeNode* , int){
        
    }

public:
    Solution();
    ~Solution();
    int goodNodes(TreeNode*) {
        
    }
};