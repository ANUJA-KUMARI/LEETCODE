#include<stdio.h>
#include<stdlib.h>
struct stack {
    int *arr;
    int size;
    int top;
};
int valid_parenthesis(char *exp){
   struct stack *s;
   s= (struct stack*)malloc(s->size *(sizeof(char)));
   s->size=134;
   s->top=-1;
   for(int i=0 ; exp[i]!='\0';i++){
    if(exp[i] =='(' ||exp[i]=='{' || exp[i]=='['){
        push(s , exp[i]);
    }else if(exp[i]==')' ||exp[i]=='}' || exp[i]==']'){
        if(isEmpty(s)){
            return 0;
        }
        pop(s);
    }

   }
   if(isEmpty(s)){
    return 1;
   }else{
    return 0;
   }
}
//PUSH FUNCTION
 struct stack* push(struct stack* s , char value ){
    if(s->top==s->size-1){
        printf(" stack overflow , now no more element can be pushed in the stack");
        return NULL;
    }else{
        s->top++;
        s->arr[s->top]=value;
        printf(" the updated value of top is %d" , s->top);
        return s ;
    }
}
//POP FUNCTION
struct stack * pop( struct stack * s){
    if(s->top==-1){
        printf(" the stack is empty nothing to pop");
        return NULL;
    }else{
        char a= s->arr[s->top];
        s->top--;
        printf(" the updated value of top is %d" , s->top);
        printf(" the poped elemnt is %d" , a); 
        return s;
    }
}
int isEmpty(struct stack *arr){
 if(arr->top==-1){
    return 1;
 }else {
    return 0;
 }
}
int main(){
     char exp ;
     printf(" enter your string ");
     scanf(%s , &exp);
     int answer =valid_parenthesis(&exp);
    return 0;
}