#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,sum=0,i;
    if(a>=b){
        for(i=b;i<=a;i++){
            if(i%5==0)
                sum+=i;
        }
    }
    else{
        for(i=a;i<=b;i++){
            if(i%5==0)
                sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}