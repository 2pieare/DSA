class Solution {
public:
    int subtractProductAndSum(int n) {
        if(n == 1) return 0;
        int sum =0, prod = 1;
        int temp;
        while(n>0){
            temp = n%10;
            sum += temp;
            prod *= temp;
            n /= 10;
        }
        return (prod-sum);
    }
};
