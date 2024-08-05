#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,prod=1,i;
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++)
        prod*=a;
    printf("%d",prod);
    return 0;
}