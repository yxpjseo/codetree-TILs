#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    //i%3==0||i%10==3,6,9||i/10==3,6,9
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%3==0||i%10==3||i%10==6||i%10==9||i/10==3||i/10==6||i/10==9)
            printf("0 ");
        else
            printf("%d ",i);
    }
    return 0;
}