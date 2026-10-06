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
        

        if (headA == NULL || headB == NULL) return nullptr ; 


        ListNode* t1 = headA ;
        ListNode* t2 = headB ;

        int cnt1 = 1 ;
        int cnt2 = 1 ;

        while (t1) {
            t1 = t1-> next; 
            cnt1 ++ ;
        }

        while (t2) {
            t2 = t2 -> next ;
            cnt2 ++ ;
        }

        int jmp = abs(cnt1 - cnt2) ;

        t1 = headA ;
        t2 = headB ;


        if (cnt1 > cnt2){
            for ( int i = 0 ; i < jmp ; i++) {
                t1 = t1-> next ;

            }
        }
        else {
            for (int i = 0 ; i < jmp ; i++){
                t2 = t2-> next ;
            }
        }

        while (t1 || t2) {
            if (t1 == t2) return t1 ;
            else {
                t1 = t1 -> next ;
                t2 = t2 -> next ;
            }
        }

        return nullptr ;

    }
};