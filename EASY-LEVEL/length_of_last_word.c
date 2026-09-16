#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("enter the string: ");
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    int i = len - 1;
    while(i >= 0 && s[i] == ' ') {
        i--;
    }
    int count = 0;
    while(i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }
    printf("length of last word: %d\n", count);
    return 0;
}