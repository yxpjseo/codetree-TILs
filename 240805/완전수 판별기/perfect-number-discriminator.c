#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0)
            sum+=i;
    }
    if(sum==n)
        printf("P");
    else
        printf("N");
    return 0;
}