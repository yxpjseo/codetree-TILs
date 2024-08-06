#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int w,h;
    char c;
    while(1){
        scanf("%d %d %c",&w,&h,&c);
        printf("%d\n",w*h);
        if(c=='C')
            break;
    }
    return 0;
}