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
        ListNode* slow=head;
        set<ListNode*>st;
        while(slow!=NULL){
            if(st.count(slow)){
                return slow;
            }
            st.insert(slow);
            slow=slow->next;
        }
        return NULL;
    }
};