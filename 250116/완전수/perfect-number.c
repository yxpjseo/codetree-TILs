#include <stdio.h>

int main() {
    // Please write your code here.
    int s,e,cnt=0;
    scanf("%d %d",&s,&e);

    for(int i=s;i<=e;i++){
        int val=0;
        for(int j=1;j<i;j++){ //j=0으로 둬서 틀림....
            if(i%j==0) val+=j;
        }
        if(val==i) cnt++;
    }
    printf("%d",cnt);
    return 0;
}