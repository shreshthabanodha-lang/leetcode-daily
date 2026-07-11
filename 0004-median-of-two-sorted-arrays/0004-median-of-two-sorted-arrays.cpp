class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        nums1.insert(nums1.begin(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());

        int high =nums1.size()-1;
        int low = 0;
        int mid;
        int mid2;
        
        if (high%2==0) {
            mid = high/2;  
            return nums1[mid];

        }

        else {
            mid = (high -1)/2;
            mid2 = (high+1)/2;

            double sum = (nums1[mid] + nums1[mid2] )/2.0;
            return sum;
        }


        
    }
};