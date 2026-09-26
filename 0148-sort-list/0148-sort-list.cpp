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
 #include<vector>
 #include<algorithm>
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> arr;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        sort(arr.begin(), arr.end());

        ListNode* newhead = NULL;
        ListNode* newtail = NULL;
        for(int i : arr){
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