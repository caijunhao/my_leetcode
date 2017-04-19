#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

/* Given an array of integers, return indices of the two numbers
 * such that they add up to a specific target.You may assume that
 * each input would have exactly one solution, and you may not use
 * the same element twice.
 *
 * Example:
 * Given nums = [2, 7, 11, 15], target = 9,
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 */
 class Solution
 {
public:
     vector<int> two_sum(vector<int> &vec, int target)
     {
         unordered_map<int,int> hash_map;
         vector<int> result;
         int temp;
         for(int i=0; i<vec.size(); i++)
         {
             temp = target - vec[i];
             if(hash_map.find(temp)!=hash_map.end())
             {
                 result.push_back(hash_map[temp]);
                 result.push_back(i);
                 return result;
             }
             hash_map[vec[i]] = i;
         }
     }
 };

 int main()
 {
     vector<int> vec{2, 7, 11, 15};
     int target = 9;
     Solution sol;
     vector<int> result = sol.two_sum(vec, target);
     for(auto &i:result)
        cout<<i<<" ";
     cout<<endl;
     return 0;
 }
