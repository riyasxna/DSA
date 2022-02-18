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
        if(head==NULL){
            return false;
        }
        ListNode* temp=head;
        while(head!=NULL){
            if(head->next==temp){
                return true;
            }
            ListNode* n=head->next;
            head->next=temp;
            head=n;
        }
        return false;
    }
};