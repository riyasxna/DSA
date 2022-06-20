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
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        
        ListNode* dummy = new ListNode;
        ListNode* res = dummy;
        
        int sum = 0, unit = 0, carry = 0;
        while(ptr1 != NULL || ptr2 != NULL || carry)
        {
            int x = 0, y = 0;
            
            if(ptr1 != NULL)
            {
                x = ptr1->val;
                ptr1 = ptr1->next;
            }
            
            if(ptr2 != NULL)
            {
                y = ptr2->val;
                ptr2 = ptr2->next;
            }
            
            sum = x + y + carry;
            carry = sum / 10;
            unit = sum % 10;
            
            ListNode* temp = new ListNode(unit);
            
            res->next = temp;
            res = res->next;
        }
             
        return dummy->next;
    }
};