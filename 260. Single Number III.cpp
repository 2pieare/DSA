class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long xr = 0;
        for(int x: nums) xr = xr^x; //complete nums xor 
    
        long r = (xr & -xr); //getting last 1 in bit repre
        int on = 0,off = 0;
    
        for(int x: nums){
            if(r & x) on = on^x; //checking if number in nums has the exact bit turned on as that of r
            else off = off^x;
        }
        return {on,off};
    }
};
