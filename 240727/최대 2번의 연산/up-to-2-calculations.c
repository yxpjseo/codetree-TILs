#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    if(a%2==0)
        a/=2;
    if(a%2!=2)
        a=(a+1)/2;
    printf("%d",a);
    return 0;
}