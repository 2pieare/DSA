class Solution {
public:
    bool isUgly(int n) {
       //answer 1 (better and cleaner)
        if (n==0) return false;
        while (n%5==0) n /= 5;
        while (n%3==0) n /= 3;
        while (n%2==0) n /= 2;
        return n==1;
        
        /*
        //answer 2 (long and recursive)
        if(n<=0) return false;
        while(n!=1){
            if(n%2 == 0){
                n /= 2;
                isUgly(n);
            }
            else if(n%3 == 0){
                n /= 3;
                isUgly(n);
            }
            else if(n%5 == 0){
                n /= 5;
                isUgly(n);
            }
            else{
                return false;
            }
        }
        return true;
        */
    }
};
