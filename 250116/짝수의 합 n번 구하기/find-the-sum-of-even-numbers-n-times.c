#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b,val=0;
        scanf("%d %d",&a,&b);
        for(int j=a;j<=b;j++)
            if(j%2==0) val+=j;
        printf("%d\n",val);
    }
    return 0;
}