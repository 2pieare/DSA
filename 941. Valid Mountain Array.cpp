class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        /*
        if(arr.size() < 3)
            return false;
		
        int mx = max_element(arr.begin(),arr.end()) - arr.begin();
        
        if(mx==0 || mx==arr.size()-1)
            return false;
        //if it is increasing until max
        for(int i=mx-1; i>=0; i--){
            if(arr[i] >= arr[i+1])
                return false;
        }
        //if it is decreasing until end
        for(int i=mx; i < arr.size()-1; i++){
            if(arr[i+1] >= arr[i])
                return false;
        }
        return true;
        */
        int n = arr.size();
        int i = 0;
        int j = n-1;
        while(i+1<n && arr[i]<arr[i+1]){
            i++;
        }
        while(j>0 && arr[j-1]>arr[j]){
            j--;
        }
        if(i>0 && i==j && j<n-1){
            return true;
        }else{
            return false;
        }
    }
};
