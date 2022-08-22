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
    ListNode* partition(ListNode* head, int x) {
        ListNode *less=new ListNode(0),*rest=new ListNode(0);
        ListNode *l=less, *r=rest;
        while(head){
            if(head->val<x){
                l->next=head;
                l=l->next;
            }
            else{
                r->next=head;
                r=r->next;
            }
            head=head->next;
        }
        l->next=rest->next;
        r->next=NULL;
        return less->next;
    }
};