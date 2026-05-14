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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }

        ListNode* dummy= new ListNode(0);
        ListNode* curr=dummy;

        ListNode* odd=head;
        ListNode* even=head->next;

        while(even !=nullptr && odd!=nullptr){
            ListNode* currOdd=odd;
            ListNode* currEve=even;

            ListNode* nextPair=even->next;
            

            curr->next=currEve;
            currEve->next=currOdd;
            currOdd->next=nextPair;

            curr=currOdd;
            odd=nextPair;

            if(nextPair != nullptr)
                even = nextPair->next;
            else
                even = nullptr;

        }
        return dummy->next;
        
    }
};