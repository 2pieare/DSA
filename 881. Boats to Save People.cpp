class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        if(people.size() == 1 && people[0] == limit) return 1;
        sort(people.begin(), people.end());
        
        int left = 0, len = people.size(), right = len - 1, boats = 0;
        while (left < right) {
            if (people[right] + people[left] <= limit) {
                left++;
            }
            boats++;
            right--;
        }
        return boats + (left==right);
    }
};
