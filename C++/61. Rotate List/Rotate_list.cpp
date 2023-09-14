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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int count=0;
        ListNode* l=head;
        while(l!=NULL){
            count++;
            l=l->next;
        }
        k=k%count;
        for(int i=0;i<k;i++){
            ListNode* curr=head;
            ListNode* rotate;
            while(curr->next->next!=NULL){
                curr=curr->next;
            }
            rotate=curr->next;
            curr->next=NULL;
            rotate->next=head;
            head=rotate;
        }
        return head;
    }
};
