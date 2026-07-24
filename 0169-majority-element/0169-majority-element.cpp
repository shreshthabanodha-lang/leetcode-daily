class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int i = 0 ;
        int cnt = 0 ;
        int cnt1 = 0 ;
        int var ;

        while (i<nums.size()){

            if (cnt == 0) {
                var = nums[i] ;
                cnt = 1;
            }
            else if (var == nums[i]){
                cnt++ ;

            }

            else {
                cnt -- ;
            }

            i++;


            

        }

        for (int i = 0 ; i < nums.size() ; i ++){
                if (var == nums[i]) cnt1++;
        }

            if (cnt1 > nums.size()/2) return var ;
        
        return 0 ;
    }
};