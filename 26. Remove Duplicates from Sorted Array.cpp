class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int res = 1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != nums[res-1]){
                nums[res] = nums[i];
                res++;
            }
        }
        return res;
        
        /*
        if (nums.size() == 0) return 0;       // exclude corner case
		vector<int> temp(nums.size());
		temp[0] = nums[0];
		int res = 1;
		for (int i = 1; i < nums.size(); i++) {
			if (temp[res - 1] != nums[i]) {
				temp[res] = nums[i];
				res++;
			}
		}
		for (int i = 0; i < res; i++) {
			nums[i] = temp[i];
		}
		return res;
        */
        
        /*
        int left=0, right=0;
        int count =0;
        while(right<=nums.size()){
            if(nums[left]==nums[right]){
                right++;
                count++;
            }else{
                nums[left+1]=nums[right];
                left = right+1;
                right++;
            }
        }
        return count;
        */
    }
};
