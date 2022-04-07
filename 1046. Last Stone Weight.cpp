class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        /*
        priority_queue<int> pq(stones.begin(), stones.end());
        while(pq.size() > 1){
            int y = pq.top();
            pq.pop();
            
            int x = pq.top();
            pq.pop();
            
            if(x != y) pq.push(y-x);
        }
        return !pq.empty() ? pq.top() : 0;
        */
        
        make_heap(stones.begin(), stones.end());
        while(stones.size() > 1){
            int y = stones.front();
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            
            int x = stones.front();
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            
            if(y!=x){
                stones.push_back(y-x);
                push_heap(stones.begin(), stones.end());
            }
        }
        return stones.size() ? stones.front() : 0;
    }
};
