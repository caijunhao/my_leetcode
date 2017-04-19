#include<iostream>
#include<vector>

using namespace std;

/*
 * The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
 *
 * Now your job is to find the total Hamming distance between all pairs of the given numbers.
 *
 * Example:
 * Input: 4, 14, 2
 *
 * Output: 6
 *
 * Explanation: In binary representation, the 4 is 0100, 14 is 1110, and 2 is 0010 (just
 * showing the four bits relevant in this case). So the answer will be:
 * HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6.
 *
 * Note:
 * Elements of the given array are in the range of 0 to 10^9
 * Length of the array will not exceed 10^4.
 */
class Solution{
public:
    int totalHammingDistance(vector<int>& nums){
        auto len = nums.size();
        if(len<2)
            return 0;
        int total_dist = 0;
        for(int i=0; i<len; i++){
            for(int j=i+1; j<len; j++){
                int weight = nums[i] ^ nums[j];
                int dist = 0;
                while(weight){
                    dist++;
                    weight &= weight - 1;
                }
                total_dist += dist;
            }
        }
        return total_dist;
    }
    
    int totalHammingDistance2(vector<int>& nums){
        int len = nums.size();
        if(len<2)
            return 0;
        int total_dist = 0;
        for(int i=0; i<32; i++){
            int num_of_ones = 0;
            for(int j=0; j<len; j++)
                num_of_ones += (nums[j]>>i) & 1;
            total_dist += num_of_ones * (len - num_of_ones);
        }
        return total_dist;
    }
 };




