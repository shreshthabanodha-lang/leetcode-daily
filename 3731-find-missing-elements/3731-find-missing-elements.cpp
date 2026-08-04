class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        sort (nums.begin() , nums.end()) ;
        vector <int> ans ;

        int n = nums.size() ;

        unordered_map <int,int> hash ;

        for (int i = 0 ; i < n ; i ++) {
            hash[nums[i]] ++ ;
        }

        for (int i = nums[0] ; i <= nums[n-1] ; i++) {

            if (hash[i] == 0){

                ans.push_back(i);

            }
         }

         return ans ;

    
    }
};