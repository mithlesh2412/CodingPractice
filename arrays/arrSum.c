#include<stdio.h>

int main()
{
    int arr[5]={2,3,4,1,6};
    int sum=0;
    for(int i=0;i<5;i++){
        sum += arr[i];
    }

    printf("sum of arr is:%d\n",sum);

    return 0;
}