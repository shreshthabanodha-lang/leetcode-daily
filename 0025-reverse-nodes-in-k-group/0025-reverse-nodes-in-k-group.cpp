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
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head ;
        vector <ListNode*> nodes ;

        while (temp) {
            nodes.push_back (temp) ;
            temp = temp->next ;


        }

        for(int i=0  ; i < nodes.size() ; i+=k){
            if(i+k <= nodes.size()){
                reverse (nodes.begin()+i , nodes.begin()+i+k);
            }
        }

        for (int i = 0 ; i < nodes.size() - 1; i++) {
            nodes[i]->next = nodes[i+1];

        }

        nodes[nodes.size() - 1] ->next = nullptr ;

        return nodes[0];
        
    }
};