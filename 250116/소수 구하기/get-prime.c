#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<i;j++)
            if(i%j==0) cnt++;
        if(cnt==1) printf("%d ",i);
    }
    return 0;
}