#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    double n;
    scanf("%d %d",&a,&b);
    n=(double)(a+b)/(a-b);
    printf("%.2lf",n);
    return 0;
}