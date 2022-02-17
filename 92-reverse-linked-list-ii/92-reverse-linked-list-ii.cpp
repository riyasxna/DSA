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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode dummy(0);
        dummy.next=head;
        ListNode* nbl= &dummy;
        int count=1;
        while(count<left){
            nbl=nbl->next;
            count++;
        }
        ListNode* wkp=nbl->next;
        while(left<right){
            ListNode* nbe=wkp->next;
            wkp->next=nbe->next;
            nbe->next=nbl->next;
            nbl->next=nbe;
            left++;
        }
        return dummy.next;
    }
};