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
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        vector<int> a;
        vector<int> b;
        
        while(temp1 != NULL){
            a.push_back(temp1->val);
            temp1 = temp1->next;
        }
        
        while(temp2 != NULL){
            b.push_back(temp2->val);
            temp2 = temp2->next;
        }
        vector<int> c=a;
        c.insert(c.end(), b.begin(), b.end());
        sort(c.begin(), c.end());
        ListNode* newhead = NULL;
        ListNode* newtail = NULL;

        for(int i : c){
            ListNode* newnode = new ListNode();
            newnode->val = i;
            newnode->next = NULL;
            if(newhead == NULL){
                newhead = newnode;
                newtail = newnode;
            }
            else{
                newtail->next = newnode;
                newtail= newnode;
            }
        }
        return newhead;
        
        

    }
};