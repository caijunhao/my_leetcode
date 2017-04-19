#include<iostream>
#include<vector>

using namespace std;

/*
 * Given an array of n positive integers and a positive integer s, 
 * find the minimal length of a contiguous subarray of which the sum ≥ s. 
 * If there isn't one, return 0 instead.
 *
 * For example, given the array [2,3,1,2,4,3] and s = 7,
 * the subarray [4,3] has the minimal length under the problem constraint.
 */
 class Solution{
public:
     int min_subarray_len(int s, vector<int>& nums){
         int left = 0;
         int min_len = INT_MAX;
         int curr_sum = 0;
         for(int i=0; i<nums.size(); i++){
             curr_sum += nums[i];
             while(curr_sum>=s){
                 min_len = min_len>(i-left+1)?(i-left+1):min_len;
                 curr_sum -= nums[left];
                 left++;
             }
         }
         return min_len==INT_MAX?0:min_len;
     }
 }
