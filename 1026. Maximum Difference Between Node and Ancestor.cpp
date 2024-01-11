
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
        int result = 0;
        maximum(root, INT_MIN, INT_MAX, result);
        return result;
    }

private:
    void maximum(TreeNode* root, int maxim, int minim, int &r) {
        if (root == nullptr) {
            return;
        }
        
        maxim = max(root->val, maxim);
        minim = min(root->val, minim);
        
        int currentResult = maxim - minim;

        if (currentResult > r) {
            r = currentResult;
        }
        
        maximum(root->left, maxim, minim, r);
        maximum(root->right, maxim, minim, r);
    }
};
