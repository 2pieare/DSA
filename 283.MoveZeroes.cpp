class Solution {
public:
    /*
    ------ this fails few cases. check the mistake ------
    vector<int> leftshift(vector<int> &nums,int i, int n){
        while(i<n-1){
            nums[i]=nums[i+1];
            i++;
        }
        nums[n-1]=0;
        return nums;
    }
    
    void moveZeroes(vector<int>& nums) {
        //check if nums[i] is zero then left shift by one place 
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                i++;
            }else{
                nums = leftshift(nums,i,n);
            }
        }
     */   
      void moveZeroes(vector<int>& nums) {
          int n = nums.size();
        int j = 0;
        
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j++]);
            }
      }
        
        
        /*
        using extra space ---------------------
        
        vector<int>temp; 
        int count = 0;
        for(int i=0; i<nums.size();i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            }else{
                count++;
            }
        }
        while(count){
            temp.push_back(0);
            count--;
        }
        nums = temp;
        */
    }
};
