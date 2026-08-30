#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next ;
};
struct node *removenode(struct node *head , int n ){
    struct node *ptr;
    ptr=head;
    int count=0;
    while (ptr!=NULL){
        count++;
        ptr=ptr->next;   
    }
    int m=count-n+1;
     if (m == 1) {
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct node *p;
     ptr=head;
     for(int i=1;i<m-1;i++){
        ptr=ptr->next;
     }
     p=ptr->next;
     ptr->next=p->next;
     free(p);
     return head;

}
int main(){
    struct node head , second , third , fourth , fifth;
    head->next=secnd;
    second->next =third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    return 0;
}