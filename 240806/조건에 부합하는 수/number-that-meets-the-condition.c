#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if((i%2==0&&i%4!=0)||(i/8)%2==0||i%7<4)
            continue;
        else
            printf("%d ",i);
    }
    return 0;
}