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
    ListNode* mergeNodes(ListNode* head) {

        ListNode* curr = head->next;
        ListNode* prev = nullptr;

        while(curr->next != nullptr){

            while(curr->next != nullptr && curr->next->val != 0){
                curr->val += curr->next->val;

                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }

            prev = curr;
            curr = curr->next;
        }
        prev->next = nullptr;
        delete curr;

        return head->next;
    }
};