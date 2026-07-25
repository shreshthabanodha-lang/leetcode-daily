class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i  = 0 ;
        int even = 0 ;
        int odd = 1 ;
        vector <int> temp(nums.size()) ;
       while (i < nums.size() ) {

        if (nums[i] > 0 ){
            temp[even] = nums[i] ;
            even += 2 ;
            i++;
        }

        else if (nums[i] < 0 ){
            temp[odd] = nums[i] ;
            odd += 2 ;
            i++;
        }
            

        

       }

       return temp ;
    }
};