#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,i,cnt=0,sum=0;
    for(i=0;i<10;i++){
        scanf("%d",&a);
        if (a>=0&&a<=200){
            sum+=a;
            cnt++;
        }
    }
    printf("%d %.1lf",sum,(double)sum/cnt);
    return 0;
}