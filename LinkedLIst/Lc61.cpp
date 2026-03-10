#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;
        ListNode* temp = head;
        int length = 1;
        while (temp->next) {
            temp = temp->next;
            length++;
        }
        ListNode* tail = temp;
        tail->next = head;
        k = k % length;
        int stepsTonewHead = length - k;
        ListNode* newtail = head;
        for (int i = 1; i < stepsTonewHead; i++) {
            newtail = newtail->next;
        }
        ListNode* newHead = newtail->next;
        newtail->next = nullptr;
        return newHead;
    }
};