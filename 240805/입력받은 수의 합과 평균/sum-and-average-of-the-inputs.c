#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        sum+=a;
    }
    printf("%d %.1lf",sum,(double)sum/n);
    return 0;
}