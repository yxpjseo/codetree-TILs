#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=2;i<=8;i+=2){
        for(int j=b;j>=a;j--){
            printf("%d * %d = %d ",j,i,i*j);
            if(j!=a) printf("/ ");
        }
        printf("\n");
    }
    return 0;
}