#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    if(n==2)
        printf("28");
    else if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
        printf("31");
    else
        printf("30");
    return 0;
}