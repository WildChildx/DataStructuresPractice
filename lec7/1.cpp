//paste this code in leetcode IDE
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x!=0){
            int digit = x % 10;
            //here INT_MIN and INT_MAX are minimum and maximum integer limits 
            //as (ans*10) becomes greater than the storing capacity of integer we divide the INT_MAX & INT_MIN by 10
            if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
                return 0;
            }
            ans = (ans*10) + digit;
            x = x /10;
        }
        
        return ans;
    }
};