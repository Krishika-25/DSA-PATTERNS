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
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* middle = findMiddleNode(head);
        ListNode* right = middle->next;
        middle->next = nullptr;  
        ListNode* left = head;
        left = sortList(left);
        right = sortList(right);
        return merge(left, right);
    }
private:
    ListNode* findMiddleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode* dummyNode = new ListNode(-1);  
        ListNode* temp = dummyNode;
        while (left != nullptr && right != nullptr) {
            if (left->val <= right->val) {
                temp->next = left;
                left = left->next;
            } else {
                temp->next = right;
                right = right->next;
            }
            temp = temp->next;
        }
        if (left != nullptr) {
            temp->next = left;
        } else {
            temp->next = right;
        }
        return dummyNode->next;
    }
};
