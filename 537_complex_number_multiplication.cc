#include<iostream>
#include<string>

using namespace std;

/*
 * Given two strings representing two complex numbers.
 *
 * You need to return a string representing their multiplication. Note i2 = -1 according to the definition.
 *
 * Example 1:
 * Input: "1+1i", "1+1i"
 * Output: "0+2i"
 * Explanation: (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i, and you need convert it to the form of 0+2i.
 * Example 2:
 * Input: "1+-1i", "1+-1i"
 * Output: "0+-2i"
 * Explanation: (1 - i) * (1 - i) = 1 + i2 - 2 * i = -2i, and you need convert it to the form of 0+-2i.
 * Note:
 *
 * The input strings will not have extra blank.
 * The input strings will be given in the form of a+bi, where the integer a and b will both belong to
 * the range of [-100, 100]. And the output should be also in this form.
 */
class Solution{
public:
    string complexNumberMultiply(string a, string b){
        istringstream aa(a), bb(b);
        int a1 = 0, b1 = 0, a2 = 0, b2 = 0;
        char buff;
        string ans = "";
        aa>>a1>>buff>>b1;
        bb>>a2>>buff>>b2;
        ans = to_string(a1*a2-b1*b2)+"+";
        ans += to_string(a1*b2+a2*b1)+"i";
        return ans;
    }
 };
