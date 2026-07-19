class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
            int sm = 0 ; 
            int cnt = 0 ;
            map <int ,int > mpp ;
            mpp[0] =1 ;

            for (int i = 0 ; i < nums.size() ; i ++){

                sm += nums[i];

                

                int rem = sm - k ;

                if (mpp.find(rem)!=mpp.end()){
                    cnt += mpp[rem] ;
                }
                
                mpp[sm]++ ;
                
            }
            return cnt ;
    } 
};