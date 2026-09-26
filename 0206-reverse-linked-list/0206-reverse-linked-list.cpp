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
#include <vector>
#include <list>
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        list<int> l;
        for(ListNode* curr = head; curr !=  nullptr; curr=curr->next){
            l.push_back(curr->val);
        } 
        l.reverse();

        ListNode* curr =  head;
        for(int v : l){
            curr->val = v;
            curr = curr->next;

        }
        return head;
    }
};