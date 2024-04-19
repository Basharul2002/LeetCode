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
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> result;

        if(root == NULL)
            return {};
        
         // In-order traversal: left, root, right
        vector<int> leftTraversal = inorderTraversal(root->left);
        result.insert(result.end(), leftTraversal.begin(), leftTraversal.end());
        result.push_back(root->val);

        vector<int> rightTraversal = inorderTraversal(root->right);
        result.insert(result.end(), rightTraversal.begin(), rightTraversal.end());

        return result;
    }
};