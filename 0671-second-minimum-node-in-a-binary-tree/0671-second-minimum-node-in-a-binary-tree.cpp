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
    void inOrder(TreeNode* root,vector<int>& result)
    {
        if(root==nullptr)
        {
            return;
        }
        inOrder(root->left,result);
        result.push_back(root->val);
        inOrder(root->right,result);
    }

    int findSecondMinimumValue(TreeNode* root) {
        vector<int> result;
        inOrder(root,result);
        sort(result.begin(),result.end());
        int min=result[0];
        for(auto x:result)
        {
            if(x!=min)
            {
                return x;
            }
        }
     return -1;
    }
};