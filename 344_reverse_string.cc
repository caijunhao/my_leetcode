#include<iostream>
#include<string>

using namespace std;

/*
 * Write a function that takes a string as input and returns the string reversed.
 *
 * Example:
 * Given s = "hello", return "olleh".
 */

class Solution{
public:
    string reverse_string(string s){
        char t;
        int len = s.size();
        for(int i=0; i<len/2;i++){
            t = s[i];
            s[i] = s[len-i-1];
            s[len-i-1] = t;
        }
        return s; 
    }
};
