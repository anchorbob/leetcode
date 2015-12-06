#include <iostream>
#include <vector>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = NULL;
        while(l1 || l2){
            int v1, v2;
            v1 = (l1 == NULL) ? 0 : l1->val;
            v2 = (l2 == NULL) ? 0 : l2->val;
            ListNode* Current = new ListNode(v1 + v2);
            static ListNode* Last = NULL;
            if (result == NULL){
                result = Current;
                Last = Current;
            } else{
                Last->next = Current;
                Last = Current; 
            }
            l1 = l1 ? l1->next : NULL;
            l2 = l2 ? l2->next : NULL;
        }
        ListNode* temp = result;
        while(temp){
            if(temp->val>=10){
                if(temp->next != NULL)
                    temp->next->val++;
                else{
                    temp->next = new ListNode(1);
                }
            }
            temp->val = temp->val%10;
            temp = temp->next;
        }
    return result;
    }
};

int main(void){
    Solution soln;
    ListNode a1(2);
    ListNode a2(3);
    ListNode a3(4);
    ListNode b1(7);
    ListNode b2(8);
    ListNode b3(9);
//  ListNode b4(3);
    a1.next = &a2;
    a2.next = &a3;
    b1.next = &b2;
    b2.next = &b3;
//  b3.next = &b4;

    ListNode *result = soln.addTwoNumbers(&a1,&b1);
    int res = 0;
    int weight = 1;
    while (result != NULL) {
        res+= weight*result->val;
        result = result->next;
        weight*= 10;
    }
    cout << res <<endl;
    return 0;
}