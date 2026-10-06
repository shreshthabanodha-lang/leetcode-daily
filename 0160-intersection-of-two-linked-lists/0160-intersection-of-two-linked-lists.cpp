/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        if (headA == NULL || headB == NULL) return NULL ;
        
        map <ListNode* , int > mpp ;

        ListNode*temp1 = headA ;

        while (temp1) {
            mpp[temp1] = 1 ;
            temp1 = temp1 ->next ;

        }

        temp1 = headB ;

        while (temp1){

            if (mpp.find(temp1) != mpp.end()) return temp1 ;
            temp1 = temp1 -> next ;
        }

        return nullptr;

    }
};