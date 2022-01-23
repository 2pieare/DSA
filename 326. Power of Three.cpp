class Solution {
public:
    bool isPowerOfThree(int n) {
        /*
        if((n%10 == 3 || n%10 == 9 || n%10 == 7 || n%10 == 1)&&n%3==0)
            return true;
        return false;
        */
        long long int res=0;
        long long int x=0;
        while(res<=n){
            res=pow(3,x);
            if(res==n){
                return true;
            }
            x++;
        }
        return false;
    }
};
