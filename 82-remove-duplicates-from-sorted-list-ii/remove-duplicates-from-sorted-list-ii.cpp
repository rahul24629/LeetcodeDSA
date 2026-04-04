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
    ListNode* deleteDuplicates(ListNode* head) {

        unordered_map<int,int> mp;

        ListNode* curr = head;

        // Count frequency
        while(curr != nullptr){
            mp[curr->val]++;
            curr = curr->next;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr1 = head;

        while(curr1 != nullptr){

            if(mp[curr1->val] > 1){

                ListNode* temp = curr1;
                prev->next = curr1->next;
                curr1 = prev->next;
                delete temp;

            }
            else{
                prev = curr1;
                curr1 = curr1->next;
            }
        }

        return dummy->next;
    }
};