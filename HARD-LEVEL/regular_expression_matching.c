#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int match (char str[] , char pattern[] , int i , int j){
    int same =0;
    if(pattern[j]==str[i] ||pattern =='.'){
        same=1;
    }
    if(pattern[j+1]=='*'){
        if(match(str , pattern , i , j+1)){
            return 1;
        }if(same&& match(str , pattern , i+1 , j)){
            return 1;
        }
        return 0;
    }
    if(same){
        return match(str, pattern , i+1 , j+1);

        
        return 0;
    }
}
int main(){
    char str[100];
    char pattern[100];
    printf("enter the string");
    scanf("%s" , str);
    printf("enter the pattern");
    scanf("%s" ,pattern);
    int n=strlen(str);
    int j=0;
    for(int i=0; i<n;i++){
         if(str[i]==pattern[j]){
            j++;
            break;
         }
         if(str[i]!=pattern[j]){
            if(pattern[j]=='.'){
                j++;
            }else if(pattern[j]=='*'){
                j++;
            }else{
                break;
            }
         }
    }

    return 0;
}