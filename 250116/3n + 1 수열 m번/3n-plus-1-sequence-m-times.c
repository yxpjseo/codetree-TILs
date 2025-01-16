#include <stdio.h>

int main() {
    // Please write your code here.
    int m,n;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&n);
        int cnt=0;
        while(n!=1){
            if(n%2==0) n/=2;
            else n=n*3+1;
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}