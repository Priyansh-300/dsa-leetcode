class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n!=0){
             int bitmask=n&1;
             count += bitmask;
             n=n>>1;
        }
        return count;
    }
};