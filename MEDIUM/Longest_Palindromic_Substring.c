#include<stdio.h>
 
void palindromic(char str[]) {

    int maxLength = 1;
    int start = 0;

    for(int i = 0; i < 10; i++) {

        for(int j = i; j < 10; j++) {

            int left = i;
            int right = j;
            int isPalindrome = 1;

             
            while(left < right) {

                if(str[left] != str[right]) {
                    isPalindrome = 0;
                    break;
                }

                left++;
                right--;
            }

            if(isPalindrome) {

                int size = j - i + 1;

                if(size > maxLength) {
                    maxLength = size;
                    start = i;
                }
            }
        }
    }

    for(int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
}
int main(){
    char string[10];
    for(int i=0;i<10;i++){
        scanf("%c",&string[i]);

    }

    return 0;
}
