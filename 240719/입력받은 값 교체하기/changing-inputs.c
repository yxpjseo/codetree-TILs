#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,temp;
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}