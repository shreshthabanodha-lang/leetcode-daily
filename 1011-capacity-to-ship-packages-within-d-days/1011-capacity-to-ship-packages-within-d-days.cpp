class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int n = weights.size() ;
        int low = INT_MIN ;
        int high =  0 ;
       
    

        for (auto it : weights) low = max (low , it) ; // low

        for (auto it : weights) high += it ; // high summ of array 
         int ans = high ;
        

        while (low <= high) {

            int mid = low + (high - low ) / 2 ;
            int load = 0 ;
            int day = 1 ;

            for (auto weight : weights) {

                if (weight + load > mid) {
                    day = day + 1 ;
                    load = weight ;
                }

                else {
                    load += weight ;
                
                }




            }

            if (day <= days ) {
                ans = mid ;
                high = mid - 1 ;
            }

            else {
                low = mid + 1;
            }

        } return ans ;

        
    } 
};