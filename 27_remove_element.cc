#include<iostream>
#include<vector>

using namespace std;

/*
 * Given an array and a value, remove all instances of that 
 * value in place and return the new length.
 *
 * Do not allocate extra space for another array, you must 
 * do this in place with constant memory.
 *
 * The order of elements can be changed. It doesn't matter 
 * what you leave beyond the new length.
 *
 * Example:
 * Given input array nums = [3,2,2,3], val = 3
 *
 * Your function should return length = 2, with the first 
 * two elements of nums being 2.
 */

class Solution{
public:
    int removeElement(vector<int>& nums, int val){
        int curr_idx = 0;
        int num_of_zeros = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==val)
                num_of_zeros++;
            else
                nums[curr_idx++] = nums[i];
        }
        nums.erase(nums.begin()+curr_idx, nums.end());
        return curr_idx;
    }
};
