class Solution {
public:
    int maximum69Number (int num) {
        string nums = to_string(num);
        int idx = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == '6'){
                idx = i;
                break;
            }
        }
        if(idx == -1){
            return num;
        }
        nums[idx] = '9';
        num = stoi(nums);
        return num;
    }
};
