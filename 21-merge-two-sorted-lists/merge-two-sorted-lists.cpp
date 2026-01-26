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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = NULL;
        ListNode* current = NULL;
        if ((list1 == NULL) && (list2 == NULL)) {
            return head;
        }
        while ((list1 != NULL) || (list2 != NULL)) {
            if (list1 == NULL) {
                if (head == NULL) {
                    head = list2;
                    current = list2;
                    list2=list2->next;
                } else {
                    current->next = list2;
                    current = current->next;
                    list2 = list2->next;
                }
            } else if (list2 == NULL) {
                if (head == NULL) {
                    head = list1;
                    current = list1;
                    list1 = list1->next;
                } else {
                    current->next = list1;
                    current = current->next;
                    list1 = list1->next;
                }
            } else if (list1->val < list2->val) {
                if (head == NULL) {
                    head = list1;
                    current = list1;
                    list1 = list1->next;
                } else {
                    current->next = list1;
                    current = current->next;
                    list1 = list1->next;
                }
            } else {
                 if (head == NULL) {
                    head = list2;
                    current = list2;
                    list2=list2->next;
                } else {
                    current->next = list2;
                    current = current->next;
                    list2 = list2->next;
                }
            }
       } 
       return head;
    }
};