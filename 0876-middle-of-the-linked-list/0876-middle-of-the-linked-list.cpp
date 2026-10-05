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
    ListNode* middleNode(ListNode* head) {

        if (head == NULL) return head ;

        ListNode* temp = head ;

        int cnt = 0 ;

        while (temp) {
            temp = temp-> next ;
            cnt++;

        }
        int mid = cnt /2 ;

        if (cnt == 1 ) return head ;


        

        temp = head;
        int i = 0;

        while (temp) {
            if (i == mid){
                return temp ;
            }

            temp = temp->next;
            i++;

        } 
        return temp;
        
        
    }
};