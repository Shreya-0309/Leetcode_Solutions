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
    ListNode* reverse_list(ListNode* curr, ListNode* temp, ListNode* prev){
        while(curr != NULL){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* rev1 = reverse_list(l1, NULL, NULL);
        ListNode* rev2 = reverse_list(l2, NULL, NULL);
        int carry = 0;
        ListNode* l_sum = new ListNode();
        ListNode* l = l_sum;
        while(rev1 != NULL || rev2 != NULL || carry){
            int sum = carry;
            if(rev1 != NULL){
                sum += rev1->val;
                rev1 = rev1->next;
            }
            if(rev2 != NULL){
                sum += rev2->val;
                rev2 = rev2->next;
            }
            carry = sum / 10;
            sum = sum % 10;
            l->next = new ListNode(sum);
            l = l->next;
        }
        return reverse_list(l_sum->next, NULL, NULL);
    }
};
