class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        if(piles.size() == h) return piles[piles.size()-1];
        
        int low = 1;
        int high = 1000000000;
        int mid;
        while(low<=high){
            mid = low + (high-low)/2;
            if(canEat(piles, mid,h)) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
    bool canEat(vector<int>& piles, int mid, int h){
        int hours = 0;
        for(int pile : piles){
            int div = pile/mid;
            hours += div;
            if(pile%mid != 0) hours++;
        }
        return hours<=h;
    }
};
