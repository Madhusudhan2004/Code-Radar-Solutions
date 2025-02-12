#include<stdio.h>

int main(){
    char inpot;
    scanf("%c",&inpot);
    if('a'<=inpot && inpot<='z'){
        printf("Lowercase");
    }
    else if ('A'<=inpot && inpot<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    
    return 0;
}