#include<iostream>
#include<unordered_set>
#include<set>

#include<vector>
using namespace std;

/*
 * Given an array of integers, find if the array contains any duplicates.
 * Your function should return true if any value appears at least twice in the array,
 * and it should return false if every element is distinct.
 */
 class Solution{
public:
     bool cotainsDuplicate(vector<int>& nums){
         if(nums.size()<2)
            return false;
         unordered_set<int> set = {};
         for(auto &n:nums){
             if(set.find(n)!=set.end())
                return true;
             set.insert(n);
         }
         return false;
     }
     bool containsDuplicate2(vector<int>& nums){
         set<int> s(nums.begin(),nums.end());
         return s.size() < nums.size();
     }
 };
