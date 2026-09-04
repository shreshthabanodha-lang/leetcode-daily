class Solution {
public:
    int splitArray(vector<int>& nums, int k) {

        int n = nums.size() ; 
        int low = *max_element(nums.begin() , nums.end()) ;
        int high = accumulate(nums.begin() , nums.end() , 0) ;

        while (low <= high) {

            int mid = low + (high - low ) / 2 ;

            int subarr = 1 ;
            int subarrsum = 0 ;

            for (int i = 0 ; i < n ; i ++) {

                if (subarrsum + nums[i] <= mid) {
                    subarrsum += nums[i] ;

                }

                else {
                    subarr++ ;
                    subarrsum = nums[i] ;

                }
            }

            if (subarr > k) {
                low = mid + 1;

            }

            else high = mid - 1 ;


        }

        return low ;

        
    }
};