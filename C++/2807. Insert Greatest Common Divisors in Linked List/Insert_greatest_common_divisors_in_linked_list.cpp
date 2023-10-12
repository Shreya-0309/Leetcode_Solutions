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
    int gcd(int a, int b){
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* curr = head->next;
        ListNode* prev = head;
        while(curr){
            ListNode* node = new ListNode(gcd(prev->val, curr->val));
            node->next = prev->next;
            prev->next = node;
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};
