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
    public: ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(0); 
        dummy->next=head;
        ListNode* prev=dummy; 
        ListNode* current=head;
        while (current !=nullptr) {
            if (current->next !=nullptr && current->val==current->next->val) {
                while (current->next !=nullptr && current->val==current->next->val) {
                    ListNode* nodeToDelete=current->next;
                    current->next=current->next->next;
                    delete nodeToDelete;
                }
                prev->next=current->next;
                delete current; 
                current=prev->next; 
            }

            else {
                prev=current;
                current=current->next;
            }
        }

        ListNode* newHead=dummy->next;
        delete dummy; 
        return newHead;
    }
};
//Self help 
/*A dummy node is created with a value of 0 and is used to handle edge cases where the head node or multiple nodes need to be deleted. The dummy node simplifies the logic by ensuring that the head node can be deleted without special handling.*/
