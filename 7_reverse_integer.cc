#include<iostream> 
#include<cmath>
using namespace std; 
/* * Reverse digits of an integer.
 *
 * Example1: x = 123, return 321
 * Example2: x = -123, return -321
 */
class Solution{
public:
    int reverse(int x){
        long long res = 0;
        while(x){
            res = res * 10 + x % 10;
            x /= 10;
        }
        return (res>INT_MAX||res<INT_MIN)?0:res;
    }
 };

class Solution2{
public:
    int reverse(int x){
        long res = 0;
        long op = (x>0)?1:-1;
        long temp = abs((long)x);
        while(temp){
            res = res*10 + temp%10;
            temp /= 10;
        } 
        return (res>(long)INT_MAX)?0:res*op;
    }
};
