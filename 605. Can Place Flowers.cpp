class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int zeroes = 1;
        int ans = 0;
        for(int i=0;i<flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                ++zeroes;
            }else{
                ans += (zeroes-1)/2;
                zeroes = 0;
            }
        }
        
        return (ans+zeroes/2 >= n);
        
    }
};
