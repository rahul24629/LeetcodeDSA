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
    int getSize(ListNode* head){
        int size=0;
        ListNode* curr=head;

        while(curr!=nullptr){
            size++;
            curr=curr->next;
        }
        return size;
    };
    ListNode* swapNodes(ListNode* head, int k) {
        int n=getSize(head);
        ListNode* curr=head;
        ListNode* first=head;
        ListNode* second=head;
        for(int i=1;i<k;i++){
            first = first->next;
        }
        for(int i=1;i<n-k+1;i++){
            second = second->next;
        }
        swap(first->val, second->val);
        return head;
    }
};