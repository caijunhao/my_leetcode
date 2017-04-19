#include<iostream>
#include<string>
#include<vector>

using namespace std;

/*
 * Given a string S and a string T, find the minimum window in S 
 * which will contain all the characters in T in complexity O(n).
 *
 * For example,
 * S = "ADOBECODEBANC"
 * T = "ABC"
 * Minimum window is "BANC".
 *
 * Note:
 * If there is no such window in S that covers all characters in T, 
 * return the empty string "".
 *
 * If there are multiple such windows, you are guaranteed that 
 * there will always be only one unique minimum window in S.
 */

class Solution{
public:
    string minWindow(string s, string t){
        int min_win = INT_MAX;
        int start = 0, left = 0, i = 0;
        int counter = t.size();
        vector<int> dict(256,0);
        while(i<s.size() && start<s.size()){
            if(counter){
                if(i==s.size())
                    break;
                if(dict[s[i]]-- > 0)
                    counter--;
                i++;
            }
            else{
                if(i-start<min_win){
                    min_win = i-start;
                    left = start;
                }
                if(dict[s[start]]++ == 0)
                    counter++;
                start++;
            }
        }
        return s.substr(left,min_win);
    }
};
