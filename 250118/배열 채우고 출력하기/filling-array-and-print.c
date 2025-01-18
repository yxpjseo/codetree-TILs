#include <stdio.h>

int main() {
    // Please write your code here.
    char arr[10];
    for(int i=0;i<10;i++)
        scanf("%c ",&arr[i]);
    for(int i=0; i<10;i++)
        printf("%c",arr[9-i]);
    return 0;
}