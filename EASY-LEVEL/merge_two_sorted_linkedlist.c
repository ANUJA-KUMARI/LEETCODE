#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *function(struct node*h1 , struct node *h2 , struct node*f1){
    struct node *p ,*q , *r;
    p=h1;
    q=h2;
    r=f1;
    while(p->next!=NULL&& q->next==NULL){
        if(p->data>>q->data){
            r->data =p->data;
            r=r->next;
            p=p->next;
            q=q->next;
        }else if(p->data<<q->data){
            r->data =q->data;
            r=r->next;
            p=p->next;
            q=q->next;
        }else{
            r->data =q->data;
            r=r->next;
            r->data =p->data;
            p=p->next;
            q=q->next;
        }
    }
    return f1;
}
int main(){
    struct node *A1 ,*B1,*C1;
    struct node *L2 ,*M2 ,*N2;
    struct node *final1 , *final2 , *final3;
    L1 = (struct node*)malloc(struct node);
    L2 = (struct node*)malloc(struct node);
    final =  (struct node*)malloc(struct node);
    reutrn 0;

}