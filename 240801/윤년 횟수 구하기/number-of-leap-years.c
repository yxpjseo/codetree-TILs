#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%100==0&&i%400!=0)
            cnt+=0;
        else if(i%4==0)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}