#include<stdio.h>
#include<stdlib.>
struct node {
    int data ;
    struct node *next;
};
struct ListNode* swapPairs(struct ListNode* head) {
    
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode *p = head;
    struct ListNode *q = head->next;
    head = q;

    struct ListNode *previous = NULL;

    while (p != NULL && q != NULL) {

        p->next = q->next;
        q->next = p;

        if (previous != NULL) {
            previous->next = q;
        }

        previous = p;

        p = p->next;

        if (p != NULL) {
            q = p->next;
        }
    }

    return head;
}
int main(){

}