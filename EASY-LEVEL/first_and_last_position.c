#include<stdio.h>
#include<stdlib>
struct array{
    int *arr;
    int total_size;
    int used_size;
};
int position(struct array*a,int ts, int us , int target){
    int i=0, j=us-1;
    while(i < us && a->arr[i]!=target){
        i++;
    }
    while(j>=0 &&a->arr[j]!=target){
        j--;
    }
      if(i == us || j == -1) {
        result[0] = -1;
        result[1] = -1;
    }
    else {
        result[0] = i;
        result[1] = j;
    }
    int result[2] = {i, j};
    return result;

}
int main(){
    struct array *Array;
    Array=(struct array*)malloc(sizeof(struct array));
    Array->total_size=80;
    Array->used_size=7;

    return 0;
}
