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
        if(head==NULL){return false;}
        unordered_set <ListNode*> s;
        while(head!=NULL){
            if(s.find(head)==s.end())
            {
                s.insert(head);
                head=head->next;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};