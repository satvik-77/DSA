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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        vector<int> a;
        while(temp != NULL){
            a.push_back(temp->val);
            temp = temp->next;
        }
        for(int i =0; i <a.size();i++){
            if (a[i] == val){
                a.erase(a.begin()+i );
                i--;
            }
        }
        ListNode* newhead = NULL;
        ListNode* newtail = NULL;

        for(int i : a){
            ListNode* newnode = new ListNode();
            newnode->val = i;
            newnode->next = NULL;

            if(newhead == NULL){
                newhead = newnode;
                newtail = newnode;
            }
            else{
                newtail->next = newnode;
                newtail = newnode;
            }

        }
        head = newhead;
        return head;
    }
};