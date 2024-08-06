#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=5000;i++){
        n=n/i;
        cnt++;
        if(n<=1){
            printf("%d",cnt);
            break;
        }
    }
    return 0;
}