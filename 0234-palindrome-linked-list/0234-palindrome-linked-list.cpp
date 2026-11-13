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
    ListNode* reverse(ListNode* head){
        ListNode* current=head;
        ListNode* prev=NULL;
        while(current!=NULL){
            ListNode* temp=current->next;
            current->next=prev;
            prev=current;
            current=temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        //Optimal solution
        if(head==NULL || head->next==NULL){
            return head;
        }
        //Middle of LL then reverse the second half and then compare it
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        //second half
        ListNode* first=head;
        ListNode* second=reverse(slow->next);
        while(second!=NULL){
            if(first->val!=second->val){
                return false;
            }
            first=first->next;
            second=second->next;
        }
        slow->next=reverse(slow->next);
        return true;
    }
};