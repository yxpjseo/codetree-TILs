#include <stdio.h>

int main() {
    // Please write your code here.
    double arr[8];
    double sum=0;
    for(int i=0;i<8;i++){
        scanf("%lf",&arr[i]);
        sum+=arr[i];
    }
    printf("%.1lf",sum/8);
    return 0;
}