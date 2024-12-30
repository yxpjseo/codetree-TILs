#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    if(b%2!=0) b--;
    for(int i=1;i<10;i++){
        for(int j=b;j>=a;j-=2){
            printf("%d * %d = %d ",j,i,i*j);
            if(j!=a) 
            printf("/ ");
        }
        printf("\n");   
    }
    return 0;
}