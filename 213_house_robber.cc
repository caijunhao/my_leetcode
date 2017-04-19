#include<iostream>
#include<vector>

using namespace std;

/*
 * After robbing those houses on that street, the thief has found himself 
 * a new place for his thievery so that he will not get too much attention. 
 * This time, all houses at this place are arranged in a circle. That means 
 * the first house is the neighbor of the last one. Meanwhile, the security 
 * system for these houses remain the same as for those in the previous street.
 *
 * Given a list of non-negative integers representing the amount of money of 
 * each house, determine the maximum amount of money you can rob tonight without 
 * alerting the police.
 */
 class Solution{
public:
     int robber(vector<int>&nums, int l, int r){
         int last = 0, now = 0;
         int temp = 0;
         for(int i=l; i<r; i++){
             temp = now;
             now = max(last+nums[i], now);
             last = temp;
         }
         return now;
     }
     int rob(vector<int>& nums){
         int size = nums.size();
         if(size<2)
            return size?nums[size-1]:0;
         else
            return max( robber(nums, 0, size-1), robber(nums, 1, size) );
     }
 };
