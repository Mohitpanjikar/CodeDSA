/**
653. Two Sum IV - Input is a BST
Given the root of a Binary Search Tree and a target number k, return true if there exist two elements in the BST such that their sum is equal to the given target.

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
void inorder(TreeNode* root,vector<int>&in){
    if(root == NULL)
        return;
    inorder(root->left,in);
    in.push_back(root->val);
    inorder(root->right,in);
}  
    
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>inorderVal;
        //store inorder -> sorted values
        inorder(root,inorderVal);
        
        // use two pointer approach to check if pair exits
        int i = 0 ,j = inorderVal.size()-1;
        while(i<j){
            int sum = inorderVal[i]+inorderVal[j];
            if(sum == k)
                return true;
            else if(sum>k)
                j--;
            else
                i++;
        }
        return false;
    }
};