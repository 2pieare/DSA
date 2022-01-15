class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int i = 0;
        int n = numbers.size()-1;
        while(i<n){
            if(numbers[i]+numbers[n]==target){
                ans.push_back(i+1);
                ans.push_back(n+1);
                break;
            }else if(numbers[i]+numbers[n]>target){
                n--;
            }else{
                i++;
            }
        }
        return ans;
        
        
        //another way will be to use a hashmap.
        //and the most boring way will be to be 2 for nested loops O(n^2)
    }
};
