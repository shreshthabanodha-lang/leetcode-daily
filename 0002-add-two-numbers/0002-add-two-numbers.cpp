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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode*dummy = new ListNode (0);
        ListNode* temp = dummy ;
        int carry = 0 ;

        while (l1 != nullptr && l2 != nullptr ){

            int sum = 0 ;

            if (l1-> val + l2 -> val + carry < 10){
                sum = l1-> val + l2 -> val + carry;
                ListNode* newNode = new ListNode (sum);
                temp->next = newNode ;
                carry = 0 ;
        
            }

            else if (l1-> val + l2 -> val + carry >= 10){
                sum = l1-> val + l2 -> val + carry;
                ListNode* newNode = new ListNode (sum%10);
                temp->next = newNode ;

                carry = sum/10 ;


            }

            temp = temp->next ;
            l1 = l1->next ;
            l2 = l2->next ;



        }

        while (l1 != nullptr){

            if (l1-> val + carry < 10){
                ListNode* newNode = new ListNode (l1->val + carry);
            temp->next = newNode ;
            temp = temp->next;
            
            carry = 0 ;

            } 
            else {
                ListNode* newNode = new ListNode ((l1->val + carry) % 10);
            temp->next = newNode ;
            temp = temp->next;
            carry = (l1->val + carry) / 10 ;
            }
            l1 = l1->next;

        }

        while (l2 != nullptr){

            if (l2-> val + carry < 10) {
                ListNode* newNode = new ListNode (l2->val + carry);
            temp->next = newNode ;
            temp = temp->next;

            carry = 0 ;
            }

            else {
                ListNode* newNode = new ListNode ((l2->val + carry) % 10);
            temp->next = newNode ;
            temp = temp->next;
            carry = (l2->val + carry) / 10 ;
            }
            l2 = l2->next;

            

            
        }

        if (carry != 0){
            ListNode* newNode = new ListNode (carry);
            temp->next = newNode ;
            temp = temp->next;
        }

    ListNode* tempp = dummy ;
    dummy = dummy->next ;
    delete tempp ;
    return dummy;



        
    }
};