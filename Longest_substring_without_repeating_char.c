#include<stdio.h>
#include<stdlib.h>

int longest_substring(char s[]) {
    int max = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        int count = 0;
        for(int j = i; s[j] != '\0'; j++) {
            int repeat = 0;
            for(int k = i; k < j; k++) {
                if(s[k] == s[j]) {
                    repeat = 1;
                    break;
                }
            }
            if(repeat == 1) {
                break;
            }
            count++;
        }
        if(count > max) {
            max = count;
        }
    }
    return max;
}
int main(){
    char s[10];
    int count=0;
    printf("enter the 10 characters int he string");
    scanf("%s",s);
    count=longest_substring(s);
    printf("%d" , count);

    return 0;

}
