class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //MIN HEAP
        priority_queue<int, vector<int>, greater<int>> pq;
        int n = arr.size();
        int i = 0;
        while(k--){
            pq.push(arr[i]);
            i++;
        }
        
        for(;i<n;i++){
            int a = pq.top();
            if(abs(arr[i]-x) == abs(a-x)){
                continue;
            }
            if(abs(arr[i]-x) < abs(a-x)){
                if(!pq.empty()){
                    pq.pop();
                    pq.push(arr[i]);
                }
            }
        }
        
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
        
        /*
        //2 POINTER
        int left = 0;
        int right = arr.size()-1;
        while(k <= right-left){
            if(x-arr[left] <= arr[right]-x)
                right--;
            else
                left++;
        }
        return vector<int>(arr.begin()+left, arr.begin()+right+1);
        */
    }
};
