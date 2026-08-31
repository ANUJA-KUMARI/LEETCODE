#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};
struct node * rotation(struct node * head , int k){
    if(head == NULL || head->next == NULL)
        return head;
    int count = 0;
    struct node *temp = head;

    while(temp != NULL) {
        count++;
        temp = temp->next;
    }

    k = k % count;

    for(int i=0 ;i<k ;i++){
        struct node * p =head;
        struct node *q =p->next;
        while(q->next!=NULL){
            q=q->next;
            p=p->next;
        }
        q->next=head;
        p->next=NULL;
        head=q;

    }
    return head;
}
int main(){
    return 0;
}