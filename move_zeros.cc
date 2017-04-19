#include<iostream>
#include<vector>

using namespace std;

/*
 * Given an array nums, write a function to move all 0's to the end of it
 * while maintaining the relative order of the non-zero elements.
 *
 * For example, given nums = [0, 1, 0, 3, 12], after calling your function, 
 * nums should be [1, 3, 12, 0, 0].
 *
 * Note:
 * You must do this in-place without making a copy of the array.
 * Minimize the total number of operations.
 */

class Solution{
public:
    void moveZeros(vector<int>& nums){
        int non_zero_idx = 0;
        int num_of_zeros = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0)
                num_of_zeros++;
            else
                nums[non_zero_idx++] = nums[i];
        }
        for(int i=non_zero_idx; i<nums.size(); i++)
            nums[i] = 0;
    }
};
