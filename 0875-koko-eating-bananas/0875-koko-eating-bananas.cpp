# include <cmath>


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int largest = INT_MIN ;
        for (int i = 0 ; i < piles.size() ; i ++) {

            if (piles[i] > largest) largest = piles[i];
            
        } 

        int low = 1 ;
        int high = largest ;
        int k = largest ;

        while (low <= high) {

            int mid = low + (high - low)/2 ;

            long long totalhrs = 0  ;
            for (auto it : piles) {

                totalhrs += ceil((double)it / mid) ;


            }

            if (totalhrs <= h) {
                k = mid ;
                high = mid - 1;

            }
            else {

                low = mid + 1;

                


                
            }

            
        }



        return k ;
    }
};