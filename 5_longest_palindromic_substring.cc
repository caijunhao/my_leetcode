#include<iostream>
#include<string>

using namespace std;

/*
 * Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.
 *
 * Example:
 *
 * Input: "babad"
 *
 * Output: "bab"
 *
 * Note: "aba" is also a valid answer.
 * Example:
 *
 * Input: "cbbd"
 *
 * Output: "bb"
 */
class Solution{
public:
    string longest_palindrome(string s){
        if(s.size()==0)
            return "";
        if(s.size()==1)
            return s;
        int max_len = 0,min_start = 0;
        for(int i=0; i<s.size();){
            int j = i, k = i;
            if(s.size()-i<max_len/2)//这里表示若i右边的字符数目小于之前计算出来的最大长度，则没必要再进行运算
                break;
            if(k<s.size()-1 && s[k]==s[k+1])
                k++;
            i = k + 1;//下一次for循环的位置，与本此循环无关
            while(k<s.size()-1 && j>0 && s[k+1]==s[j-1]){
                k++;
                j--;
            }
            int curr_len = k - j + 1;
            if(curr_len > max_len){
                max_len = curr_len;
                min_start = j;
            }
        }
        return s.substr(min_start, max_len);
    }

 };
