/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if (head == NULL) return true ;

        ListNode* slow = head ;
        ListNode* fast  = head ;

        while (fast && fast -> next) {

            fast = fast->next->next ;
            slow = slow->next ;


        }

        ListNode* temp = slow ;
        ListNode* prev = nullptr ;

        while (temp) {

            ListNode* front = temp ->next ;
            temp->next = prev ;
            prev = temp ;
            temp = front ;


        }

        ListNode* first = prev ;
        ListNode* second = head ;

        while (first) {
            if (first -> val != second-> val) return false ;
            else {
                first = first->next ;
                second = second -> next ;
            }
        }
        return true ;
        
    }
};