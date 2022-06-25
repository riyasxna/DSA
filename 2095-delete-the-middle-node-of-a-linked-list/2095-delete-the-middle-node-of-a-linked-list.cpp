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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        int n=0,mid;
        while(fast!=NULL){
            n++;
            fast=fast->next;
        }
        mid=n/2;
        while(mid>1){
            slow=slow->next;
            mid--;
        }
        slow->next=slow->next->next;
        return head;
    }
};