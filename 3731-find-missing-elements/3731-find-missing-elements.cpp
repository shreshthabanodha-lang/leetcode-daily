class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        sort (nums.begin() , nums.end()) ;
        vector <int> ans ;

        int n = nums.size() ;

       

        for (int i = 1 ; i < n ; i ++) {

            int pre = nums[i-1] ;
            int cur = nums[i] ;

            while (pre + 1 < cur) {

                ans.push_back(pre+1) ;
                pre++ ;


            }   
            
        }

        
         

         return ans ;

    
    }
};