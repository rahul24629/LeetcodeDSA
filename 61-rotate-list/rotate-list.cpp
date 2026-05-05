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
    int length(ListNode* head){
        int size=0;
        ListNode* curr=head;
        while(curr!=nullptr){
            size++;
            curr=curr->next;
        }
        return size;
    }
    ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next) return head;

    int size = length(head);
    k = k % size;

    unordered_map<int,int> mp;
    ListNode* curr = head;
    int i = 0;

    while(curr != nullptr){
        mp[i++] = curr->val;
        curr = curr->next;
    }

    ListNode* curr1 = head;
    int j = 0;

    while(curr1 != nullptr){
        int ans = (j - k + size) % size;
        curr1->val = mp[ans];
        curr1 = curr1->next;
        j++;
    }

    return head;
}
};