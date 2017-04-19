#include<iostream>

using namespace std;

/*
 * The thief has found himself a new place for his thievery again.
 * There is only one entrance to this area, called the "root." Besides
 * the root, each house has one and only one parent house. After a tour,
 * the smart thief realized that "all houses in this place forms a binary tree". 
 * It will automatically contact the police if two directly-linked 
 * houses were broken into on the same night.
 *
 * Determine the maximum amount of money the thief can rob tonight without alerting the police.
 *
 * Example 1:
 *      3
 *     / \
 *    2   3
 *     \   \ 
 *      3   1
 * Maximum amount of money the thief can rob = 3 + 3 + 1 = 7.
 * Example 2:
 *           3
 *          / \
 *         4   5
 *        / \   \ 
 *       1   3   1
 * Maximum amount of money the thief can rob = 4 + 5 = 9.
 */
 struct TreeNode{
     int val;
     TreeNode* left;
     TreeNode* right;
     TreeNode(int x) : val(x), left(NULL), right(NULL){}
 };

 class Solution{
public:
     int try_rob(TreeNode* node, int& l, int& r){
         if(node==NULL)
            return 0;
        //must be initialized to zero, otherwise the undefined value will be used at the end of the tree
         int ll=0, lr=0, rl=0, rr=0;
         l = try_rob(node->left, ll, lr);
         r = try_rob(node->right, rl, rr);
         return max(node->val+ll+lr+rl+rr, l+r);
     }
     int rob(TreeNode* root){
         int l, r;
         return try_rob(root, l, r);
     }
 };

