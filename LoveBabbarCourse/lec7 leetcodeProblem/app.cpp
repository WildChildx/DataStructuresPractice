class Solution {
public:
    bool isPowerOfTwo(int n) {
    int ans = 1,i = 0;
        while(i!=31){
            if(n == ans)
                return true;
            if(ans<INT_MAX/2)
            ans = ans * 2;
            i++;
        }
        return false;
    }
};

//the linear time can be optimized with binary search 