#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=i) printf("%d ",n-i+j);
        }
        printf("\n");
    }
    return 0;
}