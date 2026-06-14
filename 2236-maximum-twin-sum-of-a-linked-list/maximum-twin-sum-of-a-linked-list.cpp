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
    ListNode* reverse(ListNode* slow){
        ListNode* curr=slow;
        ListNode* prev=nullptr;

        while(curr!=nullptr){
            ListNode* nexT= curr->next;
            curr->next=prev;
            prev=curr;
            curr=nexT;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=nullptr;

        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=nullptr;

        ListNode* secHead=reverse(slow);

        int ans=INT_MIN;

        while(head!=nullptr){
            ans=max(ans,head->val+secHead->val);
            head=head->next;
            secHead=secHead->next;
        }

        return ans;


        
        
    }
};