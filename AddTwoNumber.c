// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Example 1:


// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.
// Example 2:

// Input: l1 = [0], l2 = [0]
// Output: [0]
// Example 3:

// Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
// Output: [8,9,9,9,0,0,0,1]
 

// Constraints:

// The number of nodes in each linked list is in the range [1, 100].
// 0 <= Node.val <= 9
// It is guaranteed that the list represents a number that does not have leading zeros.


#include<stdio.h>
#include<stdlib.h>
struct node{
   int data ;
   struct node *next;
};
struct node * finalsum(struct node *N1 , struct node* M1 , struct node *F1){
    int sum;
    int a=0;
    int b=0;
    struct node*p, *q , *f;
    p=N1;
    q=M1;
    f=F1;
    while(p !=NULL||q !=NULL){
        sum=(p->data+q->data)+b;
        if(sum>=10){
            a=sum%10;
            b=sum/10;
            f->data =a;
            f=f->next;
        }else{
            f->data=sum;
            f=f->next;
        }
        p=p->next;
        q=q->next;
    }
    return F1;
}
int main(){
    struct node *N1,*N2,*N3;
    struct node *M1,*M2,*M3;
    struct node *F1 ,*F2,*F3;
    N1=(struct node *)malloc(sizeof(struct node));
    N2=(struct node *)malloc(sizeof(struct node));
    N3=(struct node *)malloc(sizeof(struct node));
    M1=(struct node *)malloc(sizeof(struct node));
    M2=(struct node *)malloc(sizeof(struct node));
    M3=(struct node *)malloc(sizeof(struct node));
    F1=(struct node *)malloc(sizeof(struct node));
    F2=(struct node *)malloc(sizeof(struct node));
    F3=(struct node *)malloc(sizeof(struct node));
    N1->data=2;
    N1->next=N2;
    N2->data=4;
    N2->next=N3;
    N3->data=3;
    N3->next=NULL;
    M1->data=5;
    M1->next=M2;
    M2->data=6;
    M2->next=M3;
    M3->data=4;
    M3->next=NULL;
    F1->next=F2;
    F2->next=F3;
    F3->next=NULL;
    F1=finalsum(N1,M1,F1);

    struct node *temp = F1;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}