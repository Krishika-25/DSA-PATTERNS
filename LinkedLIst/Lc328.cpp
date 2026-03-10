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
    ListNode* oddEvenList(ListNode* head) {
         if (head == nullptr || head->next == nullptr) {
            return head; 
        }
        ListNode* temp=head;
        ListNode* temp2=head->next;
        ListNode* evenHead = temp2; 
        while(temp2!=nullptr && temp2->next!=nullptr){
            temp->next=temp2->next;
            temp=temp->next;
            temp2->next=temp->next;
            temp2=temp2->next;
        }
        temp->next = evenHead;
        return head;
    }
};