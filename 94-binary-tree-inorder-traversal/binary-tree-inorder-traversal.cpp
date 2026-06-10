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

    void helper(TreeNode* node, vector<int>& answer){
        if(node == nullptr) {return;}
        if(node->left != nullptr) {
            helper(node->left, answer);
        }
        answer.push_back(node->val);
        if(node->right != nullptr) {
            helper(node->right, answer);
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> answer = {};
        helper(root, answer);
        return answer;
    }
};