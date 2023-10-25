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
        if(l1==NULL && l2==NULL) return NULL;;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode *ans = new ListNode(0);
        int carry=0;
        //we wil iterate over the linkedlist till any one of them is null
        ListNode *curr = ans;
        while(l1!=NULL || l2!=NULL){
           // int value = l1->val+l2->val+carry;
           int x = (l1!=NULL) ? l1->val : 0; 
           int y =(l2!=NULL) ? l2->val : 0;
           int sum = x+y+carry;
           carry = sum/10; 
           curr->next = new ListNode(sum%10);
           curr=curr->next;
           if(l1!=NULL) l1=l1->next;
           if(l2!=NULL) l2=l2->next;
        }
        
        if(carry>0){
             curr->next=new ListNode(carry);
        }
        return ans->next;
    }
};