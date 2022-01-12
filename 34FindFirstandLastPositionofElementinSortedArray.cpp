vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        int mid;
        int start = -1, end = -1;
        while (i <= j) {
            mid = (i + j) / 2;
            if (nums[mid] == target) {
                start = mid;
                end = mid;
                while (start > 0 && nums[start - 1] == target) { --start; }
                while (end < nums.size() - 1 && nums[end + 1] == target){ ++ end; }
            }
            if (target < nums[mid]) {
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return vector<int> {start, end};
