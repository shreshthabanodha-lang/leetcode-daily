class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort (nums.begin(),nums.end());
        vector <vector <int>> v;
        for (int i=0 ; i<nums.size()-2 ; i++ ){

            if (i>0 && nums[i] == nums[i-1]) continue;
            int n1 = nums[i];
            int temp = (-1)*n1;

            int j = i+1;
            int k = nums.size()-1;

            while (j<k){

                if (nums[j]+nums[k]>temp) k--;
                else if (nums[j]+nums[k]<temp) j++;
                else if (nums[j]+nums[k]==temp){

                    while (j<k && nums[j]==nums[j+1] ) j++;
                    while (j<k && nums[k]==nums[k-1] ) k--; 

                    v.push_back({nums[i],nums[j],nums[k]});

                    j++;
                    k--;

                }

            }




        }

        return v;


    }
};