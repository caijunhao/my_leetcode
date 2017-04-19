#include<iostream>
#include<unordered_map>
#include<set>
#include<vector>

using namespace std;

/*
 * Given an array of integers and an integer k, find out whether 
 * there are two distinct indices i and j in the array such that 
 * nums[i] = nums[j] and the absolute difference between i and j is at most k.
 */
 class Solution{
public:
     bool containNearbyDuplicate(vector<int>& nums, int k){
         if(nums.size()<2)
            return false;
         unordered_map<int,int> map = {};
         for(int i=0; i<nums.size(); i++){
             if(map.find(nums[i])!=map.end()&&(i-map[nums[i]])<=k){
                 return true;
             }
             map[nums[i]] = i;
         }
         return false;
     }
 };
