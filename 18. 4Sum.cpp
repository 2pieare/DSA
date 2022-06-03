class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        
        if(nums.empty()) return ans;
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n; i++){
            int target3 = target - nums[i];
            
            for(int j=i+1; j<n; j++){
                int target2 = target3 - nums[j];
                
                int front = j+1;
                int back = n-1;
                
                while(front < back){
                    int twosum = nums[front] + nums[back];
                    if(target2 < twosum) back--;
                    else if (target2 > twosum) front++;
                    else{
                        vector<int> quad(4,0);
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[front];
                        quad[3] = nums[back];
                        ans.push_back(quad);
                        
                        while(back>front && nums[front]==quad[2]) ++front;
                        while(back>front && nums[back]==quad[3]) --back;
                    }
                }
                
                while(j+1<n && nums[j+1]==nums[j]) ++j;
            }
            
            while(i+1<n && nums[i+1]==nums[i]) ++i;
        }
        
        return ans;
    }
};
