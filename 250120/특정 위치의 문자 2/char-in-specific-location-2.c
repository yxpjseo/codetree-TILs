#include <stdio.h>

int main() {
    // Please write your code here.
    char arr[10];
    for(int i=0;i<10;i++){
        scanf("%c ",&arr[i]);
    }
    printf("%c %c %c",arr[1],arr[4],arr[7]);
    return 0;
}