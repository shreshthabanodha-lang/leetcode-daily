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

        if (head == NULL  ) return head ;

        int cnt = 1 ;
        ListNode* temp = head ;

        while (temp){
            temp = temp->next ;
            cnt++ ;

        }

        int rem = cnt - n ;

        temp = head ;

        if (rem == 1 ){
            head = head->next ;
            delete temp ;
            return head ;
        }

        int cntt =1 ;
        ListNode* prev = NULL ;
        while (temp ) {

            if (rem == cntt){
                prev ->next = temp->next ;
                delete temp ;
                return head ;

            }

            prev = temp ;
            temp = temp->next ;
            cntt++;
        }

        return head ;




        
    }
};