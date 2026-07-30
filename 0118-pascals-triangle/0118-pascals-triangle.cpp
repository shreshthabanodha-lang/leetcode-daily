class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        int row ;
        int col ;
        vector <vector<int>> ans ;

        for (row  = 1 ; row <= numRows ; row ++) {
            vector <int> temp;
            int cal = 1 ;
            temp.push_back (cal) ;
            for (col = 1 ; col < row ; col ++){
                cal = cal * (row - col);
                cal = cal / col ;

                temp.push_back (cal) ;
            }

            ans.push_back(temp);
        }

        return ans ;
        
    }
};