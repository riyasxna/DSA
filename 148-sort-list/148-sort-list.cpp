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
    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode *res=new ListNode();
        ListNode *dummy=res;
        while(l1!=NULL && l2!=NULL){
            if(l1->val<l2->val){
                dummy->next=l1;
                l1=l1->next;
            }
            else{
                dummy->next=l2;
                l2=l2->next;
            }
            dummy=dummy->next;
        }
        while(l1!=NULL){
            dummy->next=l1;
            l1=l1->next;
            dummy=dummy->next;
        }
        while(l2!=NULL){
            dummy->next=l2;
            l2=l2->next;
            dummy=dummy->next;
        }
        return res->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *slow=head, *fast=head;
        ListNode *temp=NULL;
        int n=1;
        while(fast->next!=NULL){
            fast=fast->next;
            n++;
        }
        int mid=n/2+1;
        while(mid>1){
            temp=slow;
            slow=slow->next;
            mid--;
        }
        temp->next=NULL;
        ListNode *l1=sortList(head);
        ListNode *l2=sortList(slow);
        return merge(l1,l2);
    }
};