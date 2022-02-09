class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sumofdivisors = 0;
        for(int i=1; i<=num/2; i++){
            if(num % i == 0){
                sumofdivisors += i;
            }
        }
        return (num==sumofdivisors);
    }
};
