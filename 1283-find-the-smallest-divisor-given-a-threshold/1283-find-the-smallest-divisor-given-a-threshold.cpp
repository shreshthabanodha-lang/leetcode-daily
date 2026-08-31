class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        int n = nums.size() ;
        int high = INT_MIN ;
        

        for (auto it : nums) {
            high = max (it , high) ;
        }

        int low = 1 ;
        int ans = high ;

        while (low <= high) {

            int mid = low + (high - low) / 2 ;

            long long total  = 0 ;

            for (auto it : nums) {

                total += ceil ((double)it / mid) ;
            }

            if (total <= threshold) {
                ans = mid ;
                high = mid - 1;

            }

            else {
                low = mid + 1 ;
            }


        } return ans ;
        
    } 
};