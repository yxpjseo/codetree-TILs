#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double n;
    scanf("%lf",&n);
    if(n>=1.0)
        printf("High");
    else if(n>=0.5)
        printf("Middle");
    else
        printf("Low");
    return 0;
}