class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int j = -1 ;
        for (int i = 0 ; i < nums.size(); i ++){

            if (nums[i]==val){

                j=i;
                break ;
            }
        }


         if (j == -1) return nums.size();


        int count = j ;
        for (int i = j+1 ; i < nums.size() ; i++) {

            if (nums[i] != val){
                swap (nums[i],nums[j]);
                count ++;
                j++;
            }
        }

        return count ;
           
        
        
    }
};