#include<iostream>
#include<string>

using namespace std;

/*
 * Given a string and an integer k, you need to reverse the first k
 * characters for every 2k characters counting from the start of the 
 * string. If there are less than k characters left, reverse all of them.
 * If there are less than 2k but greater than or equal to k characters,
 * then reverse the first k characters and left the other as original.
 *
 * Example:
 * Input: s = "abcdefg", k = 2
 * Output: "bacdfeg"
 * Restrictions:
 * The string consists of lower English letters only.
 * Length of the given string and k will in the range [1, 10000]
 */

class Solution{
public:
    void reverse_substr(string& s, int beg, int end, int len){
        char t;
        for(int i=0; i<len/2;i++){
            t=s[beg+i];
            s[beg+i] = s[end-i-1];
            s[end-i-1] = t;
        }
    }
    string reverseStr(string s, int k){
        int len = s.size();
        int curr_idx = 0;
        if(len>2*k){
            for(int i=0; i<len&&len-i>k; i+=2*k){
                reverse_substr(s, i, i+k, k);
                curr_idx += 2*k;
            }
        }
        if(len-curr_idx<=k){
            reverse_substr(s, curr_idx, len, len-curr_idx);
            return s;
        }
        else{
            reverse_substr(s, curr_idx, k, k);
            return s;
        }
    }
};
