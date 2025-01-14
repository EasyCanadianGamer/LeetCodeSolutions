/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* invertTree(struct TreeNode* root) {


    struct TreeNode* temp;
    // checks if a tree exists
    if( root ==NULL)
    {
        return 0;
    }

    if(-100 <= root->val && root-> val <=100)
    {


        temp =  root->left;
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);

    return root;
    }

    return 0;
}