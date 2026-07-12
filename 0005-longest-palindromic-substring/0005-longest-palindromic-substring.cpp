class Solution {
public:
    string longestPalindrome(string s) {

        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            for (int j = i; j < s.size(); j++) {

                bool palindrome = true;

                int left = i;
                int right = j;

                while (left < right) {

                    if (s[left] != s[right]) {
                        palindrome = false;
                        break;
                    }

                    left++;
                    right--;
                }

                if (palindrome && (j - i + 1 > ans.size())) {
                    ans = s.substr(i, j - i + 1);
                }
            }
        }

        return ans;
    }
};