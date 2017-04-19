#include<iostream>
#include<string>

using namespace std;

/*
 * The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows 
 * like this: (you may want to display this pattern in a fixed font for better legibility)
 *
 * P   A   H   N
 * A P L S I I G
 * Y   I   R
 * And then read line by line: "PAHNAPLSIIGYIR"
 * Write the code that will take a string and make this conversion given a number of rows:
 *
 * string convert(string text, int nRows);
 * convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
 */
class Solution{
public:
    string string_convert(string s, int numRows){
        if(numRows==1)
            return s;
        string res = "";
        int step1 = 0, step2 = 0;
        for(int i=0; i<numRows; i++){
            res.at(s[i]);
            step1 = (numRows - i -1) * 2;
            step2 = i * 2;
            int pos = i;
            if(pos<s.size())
                res += s[pos];
            while(1){
                pos += step1;
                if(pos>=s.size())
                    break;
                if(step1)
                    res += s[pos];
                if(pos>=s.size())
                    break;
                pos += step2;
                if(step2)
                    res += s[pos];
            }
        }
        return res;
    }
 };
