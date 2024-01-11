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
    void adj(TreeNode* root,vector<vector<int>> &v)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left)
        {
            v[root->val].push_back(root->left->val);
            v[root->left->val].push_back(root->val);
        }
        if(root->right)
        {
            v[root->val].push_back(root->right->val);
            v[root->right->val].push_back(root->val);
        }
        adj(root->left,v);
        adj(root->right,v);
    }
    void BFS(int start, vector<vector<int>> &v, vector<bool> &vis,int &amount) 
    {
    queue<int> q;
    q.push(start);
    while (!q.empty()) 
    {
        int size = q.size();
        while (size--) 
        {
            int u = q.front();
            q.pop();
            vis[u]=1;
            for (int i = 0; i < v[u].size(); i++) 
            {
                if (!vis[v[u][i]]) 
                {
                    q.push(v[u][i]);
                }
            }
        }
        amount++;
    }
    }
    
    int amountOfTime(TreeNode* root, int start) {
        vector<vector<int>> v(100001);
        vector<bool> vis(100001);
        int amount = 0;  // Initialize the amount variable

        adj(root, v);
        BFS(start, v, vis,amount);
        return amount-1;
    }

};
