#include<iostream>

using namespace std;

/*
 * Given a binary search tree with non-negative values, find the minimum absolute difference between values of any two nodes.
 *
 * Example:
 *
 * Input:
 *
 *    1
 *     \
 *      3
 *     /
 *    2
 *
 * Output:
 * 1
 *
 * Explanation:
 * The minimum absolute difference is 1, which is the difference between 2 and 1 (or between 2 and 3).
 * Note: There are at least two nodes in this BST.
 */
 struct TreeNode{
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL){}
 }; 
 class Solution{
public:
     void inorder_tranverse(TreeNode* node, int& val, int& min_dif){
         if(node->left!=NULL)
            inorder_tranverse(node->left, val, min_dif);
         if(val>=0)
            min_dif = min(min_dif, node->val-val);
         val = node->val;
         if(node->right!=NULL)
         inorder_tranverse(node->right, val, min_dif);
     }
     int getMinimumDifference(TreeNode* root){
         int min_dif = INT_MAX, val = -1;
         inorder_tranverse(root, val. min_dif);
         return min_dif;
     }
 };
