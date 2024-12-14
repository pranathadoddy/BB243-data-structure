/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

 Given the head of a singly linked list, return true if it is a 
palindrome
 or false otherwise.

 Example 1:
 Input: head = [1,2,2,1]
Output: true

Example 2:
Input: head = [1,2]
Output: false
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *temp= head;
        stack<int> stack;
        while(temp){
            stack.push(temp->val);
            temp = temp->next;
        }

        temp = head;
        while(temp){
            if(temp->val != stack.top()){
                return false;
            }

            stack.pop();
            temp = temp->next;
        }

        return true;
    }
};