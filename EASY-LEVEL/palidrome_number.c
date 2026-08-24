#include<stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    int original = x;
    long long reverse = 0;

    while (x > 0) {
        int digit = x % 10;

        reverse = reverse * 10 + digit;

        x = x / 10;
    }

    if (original == reverse) {
        return true;
    }
    else {
        return false;
    }
}
int main(){
    int integer;
    printf(" enter the integer");
    scanf("%d" , &integer);
     isPalimdrome(integer);
     return 0;
}
