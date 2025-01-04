#include<stdio.h>
int sum(int a ,int b){
    return a+b;
}
int main(){

    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    int result=sum(a,b);
    printf("Sum is %d",result);
}