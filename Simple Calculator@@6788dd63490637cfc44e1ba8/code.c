#include<stdio.h>
int main(){
    float a,b;
    char o;
    scanf("%f%f %c",&a,&b,&o);

    if (o=='+'){
        printf("%d",(a+b));
    }
    else if(o=='-'){
        printf("%d",(a-b));
    }
    else if(o=='*'){
        printf("%d",(a*b));
    }
    else if(o=='/'){
        printf("%d",(a/b));
    }
    else {
        printf("error");
    }
return 0;

}