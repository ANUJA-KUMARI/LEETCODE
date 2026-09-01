#include<stdio.h>
#include <string.h>
 int found(char *s, char *n, int a) {
    int j;
    for (int i = 0; s[i] != '\0'; i++) {
        j = 0;
        while (j < a) {
            if (s[i + j] != n[j]) {
                break;
            }
            j++;
        }
        if (j == a) {
            return i;
        }
    }
    return -1;
}
int main(){
    string hay;
    string needle
    printf("enter the string hay");
    scanf("%s" , &hay);
    printf("enter the string needle");
    scanf("%s" , &needle);
    int length =needle.length();
    found(&hay ,&needle, length)
    return 0;
}