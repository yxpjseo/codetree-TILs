#include <stdio.h>

int main() {
    // Please write your code here.
    int start,end,cnt=0;
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++){
        int val=0;
        for(int j=1;j<=i;j++)
            if(i%j==0) val++;
        if(val==3) cnt++;
    }
    printf("%d",cnt);
    return 0;
}