#include<iostream>
#include<set>
#include<map>
#include<vector>

using namespace std;

/*
 * Given an array of integers, find out whether there are two distinct indices
 * i and j in the array such that the absolute difference between nums[i] and 
 * nums[j] is at most t and the absolute difference between i and j is at most k.
 */
 struct TreeNode{
     map<int,int> val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x, int i) : val({x,i}), left(NULL), right(NULL){}
 };
 class Solution{
public:
     bool containNearbyAlmostDuplicate(vector<int>& nums, int k, int t){
         set<long> window = {};
         for(int i=0; i<nums.size(); i++){
             if(i>k) window.erase((long)nums[i-k-1]);
             auto pos = window.lower_bound((long)nums[i]-(long)t);
             if(pos!=window.end() && *pos<=(long)t+(long)nums[i])
                return true;
             window.insert((long)nums[i]);
         }
         return false;
     }
     void construct_bst(TreeNode* node, int val, int idx){
         if(val<node->val)
            if(node->left==NULL)
                node->left = new TreeNode(val,idx);
            else
                construct_bst(node->left, val, idx);
         else
            if(node->right==NULL)
                node->right = new TreeNode(val,idx,idx,idx,idx,idx,idx,idx,idx,idx);
            else
                construct_bst(node->right, val, idx);
     }
 };
