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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr || (head->next == nullptr && n == 1)) {
            delete head; 
            return nullptr; 
        }
        ListNode* temp=head;
        int length=0;
        while(temp!=nullptr){
            length=length+1;
            temp=temp->next;
        }
        int positiontoremove=length-n;
        if (positiontoremove == 0) {
        ListNode* newHead = head->next;
        delete head;
        return newHead;
    }
    temp=head;
        for(int i=0;i<positiontoremove-1;i++){
            temp=temp->next;
        }
        ListNode* nodetobedeleted=temp->next;
        temp->next = nodetobedeleted->next;
        delete nodetobedeleted;
        return head;
    }
};