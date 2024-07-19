#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,s,m;
    scanf("%d %d %d",&a,&b,&c);
    s=a+b+c;
    m=(a+b+c)/3;
    printf("%d\n%d\n%d",s,m,s-m);
    return 0;
}