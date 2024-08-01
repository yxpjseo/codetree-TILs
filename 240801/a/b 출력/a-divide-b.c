#include <stdio.h>

int main() {
    int a,b,i;
    scanf("%d %d",&a,&b);
    printf("%d.",a/b);
    for(i=0;i<20;i++){
        a=(a-(a/b)*b)*10;
        printf("%d",a/b);
    }
        
    return 0;
}