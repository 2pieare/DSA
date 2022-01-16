class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int pre_zeros = -1, suf_zeros = -1, max_zeros = -1, zeros = 0;
        for (int i = 0; i < seats.size(); i ++) {
            if (seats[i] == 0) {
                zeros ++;
            } else {
                if (pre_zeros == -1) {
                    pre_zeros = zeros;
                } else {
                    max_zeros = max(max_zeros, zeros);
                }
                zeros = 0;
            }
        } 
        suf_zeros = zeros;
        return max(max(pre_zeros, suf_zeros), (max_zeros + 1) / 2);
        
        /* NOT CORRECT. LACKS SOMETHING IDK
        vector<int> ones;
        int n = seats.size();
        if(n==2) return 1;
        
        for(int i=0; i<n; i++){
            if(seats[i] == 1){
                ones.push_back(i);
            }
        }
        int lastzero = 0;
        for(int l=0; l<n; l++){
            if(seats[l]==l){
                lastzero = l+1;
            }else continue;
        }
        
        int maxd = 0;
        int j = 1;
        while(j<ones.size()){
                int diff = abs(ones[j-1]-ones[j]);
                if(diff>maxd) maxd=diff;
                j++;
        }
        
        int final = (seats.size()-1)-ones[ones.size()-1];
        if(final > maxd) return final;
        
        if(ones.size()==1){
        int st = ones[ones.size()-1] - lastzero;
        if (st > maxd) return st;
        }
        
        return maxd/2;
        */
    }
};
