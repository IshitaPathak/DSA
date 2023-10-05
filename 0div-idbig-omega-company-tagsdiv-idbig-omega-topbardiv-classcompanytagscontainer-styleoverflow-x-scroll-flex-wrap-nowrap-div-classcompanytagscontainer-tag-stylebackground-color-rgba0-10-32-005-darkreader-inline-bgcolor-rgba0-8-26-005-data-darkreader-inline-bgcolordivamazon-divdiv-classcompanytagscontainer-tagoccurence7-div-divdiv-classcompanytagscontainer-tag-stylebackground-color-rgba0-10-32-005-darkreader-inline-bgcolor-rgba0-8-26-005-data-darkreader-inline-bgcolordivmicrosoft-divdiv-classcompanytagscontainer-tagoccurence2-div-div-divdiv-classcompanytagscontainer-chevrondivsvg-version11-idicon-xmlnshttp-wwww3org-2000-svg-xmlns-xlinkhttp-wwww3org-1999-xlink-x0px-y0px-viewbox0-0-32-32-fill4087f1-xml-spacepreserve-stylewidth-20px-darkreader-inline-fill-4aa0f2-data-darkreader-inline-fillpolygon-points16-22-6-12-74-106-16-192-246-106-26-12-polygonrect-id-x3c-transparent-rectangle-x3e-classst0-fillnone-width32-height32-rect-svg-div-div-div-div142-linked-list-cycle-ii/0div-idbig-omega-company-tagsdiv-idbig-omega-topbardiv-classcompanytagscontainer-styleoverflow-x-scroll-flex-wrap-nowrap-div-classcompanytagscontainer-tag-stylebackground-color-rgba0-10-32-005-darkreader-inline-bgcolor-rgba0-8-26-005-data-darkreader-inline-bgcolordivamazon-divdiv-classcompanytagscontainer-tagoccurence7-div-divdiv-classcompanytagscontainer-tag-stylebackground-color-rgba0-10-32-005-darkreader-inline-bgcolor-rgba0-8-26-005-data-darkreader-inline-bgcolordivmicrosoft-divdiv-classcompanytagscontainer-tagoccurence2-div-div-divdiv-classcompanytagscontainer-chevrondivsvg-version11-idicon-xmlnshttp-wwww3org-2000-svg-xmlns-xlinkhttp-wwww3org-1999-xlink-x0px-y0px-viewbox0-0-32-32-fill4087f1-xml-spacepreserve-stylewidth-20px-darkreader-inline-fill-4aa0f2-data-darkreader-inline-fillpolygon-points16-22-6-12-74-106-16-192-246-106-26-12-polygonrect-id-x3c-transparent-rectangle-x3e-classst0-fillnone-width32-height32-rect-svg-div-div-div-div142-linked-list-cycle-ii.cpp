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
    ListNode *detectCycle(ListNode *head) {
        // optimal sol
       if(head==NULL || head->next==NULL) return NULL;
           ListNode *slow=head;
           ListNode *fast=head;
           ListNode *entry=head;
           
        while(fast->next!=NULL && fast->next->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
            
            if(slow==fast){
                while(entry!=slow){
                  entry=entry->next;
                  slow=slow->next;
                }
                return entry;
            }
        }
        return NULL;
         
            
    //      unordered_set<ListNode *> s;
    //     ListNode *curr=head;
    //     while(curr!=NULL){
    //         if(s.find(curr)!=s.end())
    //           return curr;
    //         s.insert(curr);
    //         curr=curr->next;
    //     }
    //     return NULL;
    }
};