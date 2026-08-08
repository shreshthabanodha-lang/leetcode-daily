class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = -1;
        int last = -1;

        int low = 0;
        int high = nums.size() - 1;

        // First occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                first = mid;

            if (nums[mid] >= target)
                high = mid - 1;
            else
                low = mid + 1;
        }

        if (first == -1)
            return {-1, -1};

        low = 0;
        high = nums.size() - 1;

        // Last occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                last = mid;

            if (nums[mid] <= target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return {first, last};
    }
};