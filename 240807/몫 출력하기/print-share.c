#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,cnt=0;
    while(1){
        scanf("%d",&a);
        if(a%2==0){
            printf("%d\n",a/2);
            cnt++;
        }
        if(cnt==3)
            break;
    }
    return 0;
}