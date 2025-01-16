#include <stdio.h>

int main() {
    // Please write your code here.
    int n,a,b;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        int val=1;
        for(int j=a;j<=b;j++)
            val*=j;
        printf("%d\n",val);
    }
    return 0;
}