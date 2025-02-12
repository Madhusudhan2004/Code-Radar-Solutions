#include<stdio.h>
int main(){
    float a,b;
    char o;
    scanf("%f%f %c",&a,&b,&o);

    if (o=='+'){
        printf("%.2f",a+b);
    }
    else if(o=='-'){
        printf("%.2f",a-b);
    }
    else if(o=='*'){
        printf("%.2f",a*b);
    }
    else if(o=='/'){
        printf("%.2f",a/b);
    }
    else {
        printf("error");
    }
return 0;

}