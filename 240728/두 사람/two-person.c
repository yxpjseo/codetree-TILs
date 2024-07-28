#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    char aa,bb;

    scanf("%d %c %d %c",&a,&aa,&b,&bb);
    if(a>=19&&aa=='M'||b>=19&&bb=='M')
        printf("1");
    else
        printf("0");

    return 0;
}