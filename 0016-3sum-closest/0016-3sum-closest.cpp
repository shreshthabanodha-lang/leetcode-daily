class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort (nums.begin() , nums.end()) ;
        long long closest = INT_MIN ;
        for (int i = 0 ; i < nums.size() ; i ++) {
            if (i>0 && nums[i] == nums[i-1] ) continue ;

            int j = i+1 ;
            int k = nums.size() -1 ;

            while (j< k) {
            
                int sum = nums[i] + nums[j] + nums[k] ;

                if (abs(target - sum) < abs(target - closest)) closest = sum ;


                if (sum < target ) j++ ;
                else if (sum > target) k--;

                else return sum ;

                while (j>k && nums[j] == nums[j-1]) j++ ;
                while (j>k && nums[k] == nums[k+1]) k++ ;
                
                    

                
            }


        } return closest ;

    }
};