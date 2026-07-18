class Solution {
public:
    int missingNumber(vector<int>& nums) {

        sort (nums.begin(),nums.end());

        int n = nums.size();

        int sm = (n*(n+1))/2 ;
        int cnt = 0 ;

        for (int i = 0 ; i < n ; i ++ ){
            cnt = cnt + nums[i] ;
        }

        return sm - cnt ;




        
    }
};