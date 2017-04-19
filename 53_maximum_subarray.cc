#include<iostream>
#include<vector>

using namespace std;

/*
 * Find the contiguous subarray within an array (containing at least
 * one number) which has the largest sum.
 *
 * For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
 * the contiguous subarray [4,-1,2,1] has the largest sum = 6.
 */

class Solution{
public:
    int maxSubArray(vector<int>& nums){
        int max_sum = nums[0];
        int curr_sum = 0;
        for(int i=0; i<nums.size(); i++){
            curr_sum = max(nums[i], curr_sum+nums[i]);
            max_sum = max(curr_sum, max_sum);
        }
        return max_sum;
    }
};
