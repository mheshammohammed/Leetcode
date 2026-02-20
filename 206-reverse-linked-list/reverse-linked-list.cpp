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
        if (head == NULL) {return head;}
        if (head->next == NULL) {return head;}
        ListNode* newList = NULL;
        ListNode* previous = head;
        ListNode* current = head->next; 

        while (current != NULL) {

            previous->next = newList;
            newList = previous;

            previous = current;
            current = current->next;

        }

        previous->next = newList;
        newList = previous;

        return newList;
                
    }
};