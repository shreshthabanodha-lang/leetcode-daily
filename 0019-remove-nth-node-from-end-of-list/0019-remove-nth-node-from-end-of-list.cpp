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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == NULL) return head ;

        ListNode* fast = head ;
        ListNode* slow = head ;
        ListNode* slowprev = nullptr ;

        for (int i = 0 ; i < n ; i++) {
            fast = fast->next ;

        }

        while (fast) {
            slowprev = slow ;
            slow = slow->next ;
            fast = fast->next ;
        }

        if (slowprev == NULL) {

            ListNode* temp = head ;
            head = head -> next ;
            delete temp ;

        }
        else {
            slowprev->next = slow->next ;
        delete slow ;

        }

        
        return head ;





        
    }
};