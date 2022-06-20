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
        if(head==NULL)
            return NULL;
        if(head->next==NULL){
            delete head;
            return NULL;
        }
        ListNode* slow=head,*fast=head;
        while(n--)
            fast=fast->next;
        if(fast==NULL){
            head=head->next;
            delete slow;
            return head;
        }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* temp=slow->next;
        slow->next=temp->next;
        delete temp;
        return head;
    }
};