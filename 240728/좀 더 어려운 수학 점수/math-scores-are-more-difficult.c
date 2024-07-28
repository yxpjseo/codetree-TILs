#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int am,ae,bm,be;
    scanf("%d %d %d %d",&am,&ae,&bm,&be);
    if(am>bm||am==bm&&ae>be)
        printf("A");
    else
        printf("B");
    return 0;
}