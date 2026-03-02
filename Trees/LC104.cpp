#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int leftheight, rightheight = 0;
        if (root == NULL)
            return 0;
        leftheight = maxDepth(root->left);
        rightheight = maxDepth(root->right);
        return 1 + max(leftheight, rightheight);
    }
};