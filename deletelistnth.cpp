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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int count = 0;
       struct ListNode* temp = head;
       while(temp){
        count++;
        temp = temp->next;
       }

       count = count - n - 1;
       if(count == -1){
        return head->next;
       }

       temp = head;
       while(count > 0){
        temp = temp->next;
        count--;
       }

       temp->next = temp->next->next;
       return head;
    }
};