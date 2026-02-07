class Solution {
public:
    pair<int,int> halfAdder(int cin, int x, int y) {
        int sum = x + y + cin;
        return { sum % 10, sum / 10 };
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int cin = 0;

        ListNode* head = nullptr;
        ListNode* current = nullptr;

        while (l1 != nullptr || l2 != nullptr) {
            int x = (l1 ? l1->val : 0);
            int y = (l2 ? l2->val : 0);

            auto [f, cout] = halfAdder(cin, x, y);
            cin = cout;

            if (!head) {
                head = new ListNode(f);
                current = head;
            } else {
                current->next = new ListNode(f);
                current = current->next;
            }

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        if (cin) {
            current->next = new ListNode(cin);
        }

        return head;
    }
};
