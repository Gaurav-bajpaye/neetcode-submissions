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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return nullptr;
        ListNode* x = head;
        ListNode* y = head->next;
        head->next = nullptr;

        while(y != nullptr){
          ListNode* z = y->next;
          y->next = x;
          x=y;
          y=z;
        }
        return x;
    }
};
