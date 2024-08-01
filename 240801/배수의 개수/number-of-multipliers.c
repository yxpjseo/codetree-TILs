#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,cnt3=0,cnt5=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a);
        if(a%3==0)
            cnt3++;
        if(a%5==0)
            cnt5++;
    }
    printf("%d %d",cnt3,cnt5);
    return 0;
}