#include<iostream>
#include<vector>

using namespace std;

/*
 * You are a professional robber planning to rob houses along a street.
 * Each house has a certain amount of money stashed, the only constraint 
 * stopping you from robbing each of them is that adjacent houses have 
 * security system connected and it will automatically contact the police 
 * if two adjacent houses were broken into on the same night.
 *
 * Given a list of non-negative integers representing the amount of money 
 * of each house, determine the maximum amount of money you can rob tonight 
 * without alerting the police.
 */
 /*
  * Solution:
  *
  * f(0) = nums[0]
  * f(1) = max(num[0], num[1])
  * f(k) = max( f(k-2) + nums[k], f(k-1)  )
  */
 class Solution{
public:
     int rob(vector<int>& nums){
         int last = 0, now = 0;
         int temp = 0;
         for(int i=0; i<nums.size(); i++){
             temp = now;
             now = max(last+nums[i], now);
             last = temp;
         }
         return now;
     }
 };
