#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int n,a,sum,cnt=0;
    double avr;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<4;j++){
            scanf("%d",&a);
            sum+=a;
        }
        avr=(double)sum/4;
        arr[i]=avr;
        if(avr>=60){
            printf("pass\n");
            cnt++;
        }
        else printf("fail\n");
    }
    printf("%d",cnt);
    return 0;
}