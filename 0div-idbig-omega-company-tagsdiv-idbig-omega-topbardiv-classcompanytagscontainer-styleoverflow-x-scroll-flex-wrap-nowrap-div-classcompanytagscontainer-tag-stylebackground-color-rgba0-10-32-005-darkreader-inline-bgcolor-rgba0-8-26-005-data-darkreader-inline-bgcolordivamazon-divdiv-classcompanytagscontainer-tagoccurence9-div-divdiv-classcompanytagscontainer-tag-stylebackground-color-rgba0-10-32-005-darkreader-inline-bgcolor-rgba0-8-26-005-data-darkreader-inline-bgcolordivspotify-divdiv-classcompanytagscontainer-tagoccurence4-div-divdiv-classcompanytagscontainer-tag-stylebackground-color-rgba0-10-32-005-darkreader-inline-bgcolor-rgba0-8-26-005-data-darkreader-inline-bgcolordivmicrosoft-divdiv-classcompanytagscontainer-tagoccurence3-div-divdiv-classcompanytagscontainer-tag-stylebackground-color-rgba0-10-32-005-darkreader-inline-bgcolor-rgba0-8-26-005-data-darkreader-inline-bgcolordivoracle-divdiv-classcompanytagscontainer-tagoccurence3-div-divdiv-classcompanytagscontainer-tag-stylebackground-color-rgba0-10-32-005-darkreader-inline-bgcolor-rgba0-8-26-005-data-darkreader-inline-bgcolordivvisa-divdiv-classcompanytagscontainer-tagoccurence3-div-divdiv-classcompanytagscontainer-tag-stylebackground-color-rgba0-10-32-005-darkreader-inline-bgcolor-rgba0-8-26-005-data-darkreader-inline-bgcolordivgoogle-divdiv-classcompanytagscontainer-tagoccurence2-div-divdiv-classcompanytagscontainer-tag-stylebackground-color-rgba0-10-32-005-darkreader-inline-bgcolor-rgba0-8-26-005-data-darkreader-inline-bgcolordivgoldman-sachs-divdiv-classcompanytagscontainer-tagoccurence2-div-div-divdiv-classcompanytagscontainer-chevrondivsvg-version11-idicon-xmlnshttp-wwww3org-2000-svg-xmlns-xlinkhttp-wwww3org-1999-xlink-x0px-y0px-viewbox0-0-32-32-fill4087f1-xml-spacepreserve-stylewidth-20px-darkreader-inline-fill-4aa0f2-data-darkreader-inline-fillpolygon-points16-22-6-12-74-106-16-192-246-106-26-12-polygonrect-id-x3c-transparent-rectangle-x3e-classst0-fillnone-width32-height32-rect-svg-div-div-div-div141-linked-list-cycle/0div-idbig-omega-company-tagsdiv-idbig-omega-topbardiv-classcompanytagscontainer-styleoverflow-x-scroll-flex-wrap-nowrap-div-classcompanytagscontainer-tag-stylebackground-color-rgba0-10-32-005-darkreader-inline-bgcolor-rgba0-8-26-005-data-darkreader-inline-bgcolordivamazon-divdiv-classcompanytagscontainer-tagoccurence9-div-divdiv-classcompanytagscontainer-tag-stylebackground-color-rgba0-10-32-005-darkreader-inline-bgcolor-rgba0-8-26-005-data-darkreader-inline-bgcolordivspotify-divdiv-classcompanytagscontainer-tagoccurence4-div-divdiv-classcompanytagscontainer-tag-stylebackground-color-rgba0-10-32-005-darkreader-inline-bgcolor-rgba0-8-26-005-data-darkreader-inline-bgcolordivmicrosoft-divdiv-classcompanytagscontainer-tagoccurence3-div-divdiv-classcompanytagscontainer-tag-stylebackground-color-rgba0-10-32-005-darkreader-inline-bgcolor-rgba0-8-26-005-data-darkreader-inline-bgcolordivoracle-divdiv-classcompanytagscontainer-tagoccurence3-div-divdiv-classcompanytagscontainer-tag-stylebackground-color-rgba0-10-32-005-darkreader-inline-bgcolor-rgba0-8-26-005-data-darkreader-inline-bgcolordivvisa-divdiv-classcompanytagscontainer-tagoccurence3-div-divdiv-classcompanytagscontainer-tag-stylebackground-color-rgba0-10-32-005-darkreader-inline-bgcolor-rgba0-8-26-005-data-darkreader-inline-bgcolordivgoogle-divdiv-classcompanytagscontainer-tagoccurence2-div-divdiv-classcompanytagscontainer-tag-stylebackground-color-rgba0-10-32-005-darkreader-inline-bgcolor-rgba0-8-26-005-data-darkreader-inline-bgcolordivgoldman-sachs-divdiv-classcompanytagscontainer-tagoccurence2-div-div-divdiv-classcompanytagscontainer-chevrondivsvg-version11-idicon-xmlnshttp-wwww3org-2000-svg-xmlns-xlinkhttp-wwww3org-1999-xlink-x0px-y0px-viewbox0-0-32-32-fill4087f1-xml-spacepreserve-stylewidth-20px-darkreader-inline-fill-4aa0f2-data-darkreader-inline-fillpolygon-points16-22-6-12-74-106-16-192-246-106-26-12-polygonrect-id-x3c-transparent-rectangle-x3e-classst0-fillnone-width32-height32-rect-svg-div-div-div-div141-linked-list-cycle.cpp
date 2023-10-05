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
    bool hasCycle(ListNode *head) {
        ListNode *curr=head;
        // if there is only one node or two node in LL then cycle is not poosible
        if(head==NULL || head->next==NULL || head->next->next==NULL){
            return false;
        }
        ListNode *slow=head;
        ListNode * fast=head->next;
        // if both the pointers slow and fast meet at same point then it means loop hai
        // slow jab tak fast ke equal ni hai tb tk cycle me ghumte rhenge
        while(slow!=fast){
            if(fast==NULL || fast->next==NULL ){
                return false;
            }
            slow=slow->next;
            fast=fast->next->next;
            
        }
        return true;
    }
};