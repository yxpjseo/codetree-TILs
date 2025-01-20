#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int sum=0;
    double avg=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<10;i+=2) sum+=arr[i];
    for(int i=2;i<10;i+=3) avg+=arr[i];
    avg/=3;
    printf("%d %.1lf",sum,avg);
    return 0;
}