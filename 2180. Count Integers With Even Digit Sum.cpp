class Solution {
public:
    int countEven(int num) {
        int ans{0};
        for (int i{num}; i > 0; i--){
            //cout << func(i) << " ";
            if ((func(i))%2==0){
                //cout << i << "  ";
                ans++;
            }
        }
        return ans;
    }
    int func(int n){
        int m, sum{0};
        while(n>0){    
            m=n%10;    
            sum=sum+m;    
            n=n/10;    
            }
        return sum;
    }
};
